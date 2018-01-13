file(GLOB TEST_ENTITY_SOURCES
    "*.cpp"
    "*.h"
)

add_executable(test-entity
    ${TEST_ENTITY_SOURCES}
)

target_link_libraries(test-entity
    entity
    gtest
    gmock
)
