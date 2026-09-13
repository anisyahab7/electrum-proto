add_library(wallet STATIC wallet.cpp)
target_include_directories(wallet PUBLIC ${CMAKE_SOURCE_DIR}/include)
add_executable(electrum-proto main.cpp)
target_link_libraries(electrum-proto PRIVATE wallet)
