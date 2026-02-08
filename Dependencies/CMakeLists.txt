file(GLOB EditorMedia_FILES "EditorMedia/*")
file(COPY ${EditorMedia_FILES} DESTINATION "${CMAKE_BINARY_DIR}/bin")

get_filename_component(OGRE_SHARE_DIR "${OGRE_DIR}" DIRECTORY)
get_filename_component(OGRE_ROOT_DIR "${OGRE_SHARE_DIR}" DIRECTORY)

set(OGRE_PLUGIN_SOURCE_DIR "${OGRE_ROOT_DIR}/plugins/ogre")
set(OGRE_PLUGIN_TARGET_DIR "${CMAKE_BINARY_DIR}/plugins/ogre")
set(OGRE_PLUGIN_CFG_TARGET "${CMAKE_BINARY_DIR}/bin/plugins.cfg")

if(EXISTS "${OGRE_PLUGIN_SOURCE_DIR}")
    file(MAKE_DIRECTORY "${OGRE_PLUGIN_TARGET_DIR}")
    file(COPY "${OGRE_PLUGIN_SOURCE_DIR}/" DESTINATION "${OGRE_PLUGIN_TARGET_DIR}")
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
Plugin=Codec_STBI
")

file(WRITE "${OGRE_PLUGIN_CFG_TARGET}" "${SCAPE_OGRE_PLUGINS_CFG}")
