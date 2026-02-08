file(GLOB EditorMedia_FILES "EditorMedia/*")
file(COPY ${EditorMedia_FILES} DESTINATION "${CMAKE_BINARY_DIR}/bin")

get_filename_component(OGRE_SHARE_DIR "${OGRE_DIR}" DIRECTORY)
get_filename_component(OGRE_ROOT_DIR "${OGRE_SHARE_DIR}" DIRECTORY)

set(OGRE_PLUGIN_SOURCE_DIR "${OGRE_ROOT_DIR}/plugins/ogre")
set(OGRE_PLUGIN_TARGET_DIR "${CMAKE_BINARY_DIR}/plugins/ogre")
set(OGRE_PLUGIN_CFG_TARGET "${CMAKE_BINARY_DIR}/bin/plugins.cfg")
set(OGRE_BIN_SOURCE_DIR "${OGRE_ROOT_DIR}/bin")

if(EXISTS "${OGRE_PLUGIN_SOURCE_DIR}")
    file(MAKE_DIRECTORY "${OGRE_PLUGIN_TARGET_DIR}")
    file(COPY "${OGRE_PLUGIN_SOURCE_DIR}/" DESTINATION "${OGRE_PLUGIN_TARGET_DIR}")
endif()

if(EXISTS "${OGRE_BIN_SOURCE_DIR}")
    # Ensure codec runtime dependencies (e.g. FreeImage) are available next to the executable.
    file(COPY "${OGRE_BIN_SOURCE_DIR}/" DESTINATION "${CMAKE_BINARY_DIR}/bin"
         FILES_MATCHING PATTERN "*.dll" PATTERN "*.DLL")
endif()

set(SCAPE_CODEC_PLUGIN "Plugin=Codec_STBI")
if(EXISTS "${OGRE_PLUGIN_SOURCE_DIR}/Codec_FreeImage.dll")
    set(SCAPE_CODEC_PLUGIN "Plugin=Codec_FreeImage")
endif()

set(SCAPE_OGRE_PLUGINS_CFG
"# Defines plugins to load

# Define plugin folder
PluginFolder=../plugins/ogre

# Define plugins
Plugin=RenderSystem_Direct3D11
Plugin=RenderSystem_GL
Plugin=RenderSystem_GL3Plus
Plugin=Plugin_ParticleFX
Plugin=Plugin_OctreeSceneManager
${SCAPE_CODEC_PLUGIN}
")

file(WRITE "${OGRE_PLUGIN_CFG_TARGET}" "${SCAPE_OGRE_PLUGINS_CFG}")
