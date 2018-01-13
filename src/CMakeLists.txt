# Entity library.
# @copyright MIT License
# @author Emilio González Montaña <emilio@ociotec.com>
# @see https://github.com/ociotec/entity */

find_package(Qt5Core)

file(GLOB LIB_ENTITY_SOURCES
    "*.cpp"
    "*.h"
)

add_library(entity STATIC
    ${LIB_ENTITY_SOURCES}
)

target_include_directories(entity PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(entity
    Qt5::Core
)
