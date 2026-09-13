add_executable(electrum-proto_tests test_core.cpp)
target_link_libraries(electrum-proto_tests PRIVATE wallet)
target_include_directories(electrum-proto_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME core COMMAND electrum-proto_tests)
