include_directories(${CMAKE_SOURCE_DIR}/3rdparty)

## Add some tests
add_gtest(TCNAME TestScopedThread SOURCE_FILES TestScopedThread.cpp LIBS pthread)

