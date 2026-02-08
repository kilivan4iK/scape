// GLSL fallback equivalent of HeightfieldShaderCg main_vp.
#version 120

uniform mat4 worldViewProj;
uniform vec3 localCameraPos;
uniform vec4 unitQuadScale;
uniform vec4 unitQuadBias;
uniform vec4 localPosScale;
uniform vec4 localPosBias;
uniform vec4 gradientScaleBias;
uniform vec4 lightDirection;
uniform vec4 brushPosRamp;

attribute vec4 vertex;
attribute vec2 uv0;

varying vec4 oUnitQuadPos;
varying vec3 oNormalDotYDist;
varying vec3 oNormal;

void main()
{
    oUnitQuadPos = vec4(uv0.x, vertex.x, uv0.y, 1.0) * unitQuadScale + unitQuadBias;

    vec3 gradient = vec3(vertex.y * gradientScaleBias.x, 0.0, vertex.z * gradientScaleBias.x);
    vec3 normalMul = normalize(vec3(gradient.x * lightDirection.w, 1.0, gradient.z * lightDirection.w));
    oNormal = normalize(vec3(gradient.x, 1.0, gradient.z));

    vec4 localPosition = oUnitQuadPos * localPosScale + localPosBias;
    gl_Position = worldViewProj * localPosition;

    vec2 relBrushCenter = oUnitQuadPos.xz - brushPosRamp.xy;
    float brushStrength = dot(relBrushCenter, relBrushCenter) * brushPosRamp.z + brushPosRamp.w;
    oUnitQuadPos.w = brushStrength;

    oNormalDotYDist.x = length(gradient);
    oNormalDotYDist.y = min(1.0 / max(length(localCameraPos - localPosition.xyz), 1e-6), 1.0);
    oNormalDotYDist.z = clamp(dot(normalMul, lightDirection.xyz), 0.0, 1.0);
}
