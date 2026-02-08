// GLSL fallback equivalent of HeightfieldShaderCg main_fp (single-projection path).
#version 120

uniform vec4 isoScales;
uniform vec4 isoDotScales;
uniform vec4 uvScaleGlobal;
uniform vec4 uvScaleLocal;
uniform vec4 layerHeightScale;
uniform vec4 layerHeightBias;
uniform vec4 layerSlopeScale;
uniform vec4 layerSlopeBias;
uniform mat4 layerHeightDistort;
uniform vec4 intensityScaleGlobal;
uniform vec4 fogColor;
uniform vec4 sunColor;
uniform vec4 skyColor;
uniform vec4 brushColor;

uniform sampler2D samplerNoise;
uniform sampler2D samplerLevel0;
uniform sampler2D samplerLevel1;
uniform sampler2D samplerLevel2;
uniform sampler2D samplerLevel3;

varying vec4 oUnitQuadPos;
varying vec3 oNormalDotYDist;
varying vec3 oNormal;

void main()
{
    vec4 globalColor = texture2D(samplerNoise, oUnitQuadPos.xz * uvScaleGlobal.xy);

    vec4 distortion = layerHeightDistort * (globalColor - vec4(0.5));
    vec4 relHeight = vec4(oUnitQuadPos.y) + distortion;
    vec4 lerpWeights = clamp(relHeight * layerHeightScale + layerHeightBias, 0.0, 1.0);
    vec4 lerpWeights2 =
        clamp((distortion.w + oNormalDotYDist.x) * layerSlopeScale + layerSlopeBias, 0.0, 1.0);
    lerpWeights *= lerpWeights2;

    vec2 texCoord = oUnitQuadPos.xz * uvScaleLocal.xy;

    vec3 color = texture2D(samplerLevel0, texCoord).rgb;
    color = mix(color, texture2D(samplerLevel1, texCoord).rgb, lerpWeights.x);
    color = mix(color, texture2D(samplerLevel2, texCoord).rgb, lerpWeights.y);
    color = mix(color, texture2D(samplerLevel3, texCoord).rgb, lerpWeights.z);

    vec4 diffuseColor = mix(skyColor, sunColor, oNormalDotYDist.z);
    color = diffuseColor.rgb * dot(globalColor, intensityScaleGlobal) * color;

    float fogDen = max(fogColor.w * oNormalDotYDist.y * oNormalDotYDist.y, 1e-6);
    float fogLerp = clamp(exp(-1.0 / fogDen), 0.0, 1.0);
    color = mix(fogColor.rgb, color, fogLerp);

    float rim = 200.0 * clamp(-oUnitQuadPos.w + 0.1, 0.0, 1.0);
    float grad = clamp(oUnitQuadPos.w, 0.0, 1.0);
    vec4 brushQuadPos = oUnitQuadPos;
    brushQuadPos.w = pow(grad, max(brushColor.w, 1e-5));
    vec4 quadMod = brushQuadPos - floor(brushQuadPos);

    vec4 isoScaled = isoScales * oNormalDotYDist.y;
    vec4 iso = clamp((0.5 - abs(0.5 - quadMod)) * isoScaled, 0.0, 0.5);
    iso.w = 1.0;
    color = color + dot(iso, isoDotScales) * oNormalDotYDist.y;

    color = mix(color, brushColor.rgb, 0.5 * (quadMod.w + grad * rim));

    gl_FragColor = vec4(color, 1.0);
}
