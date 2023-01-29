cmake_minimum_required(VERSION 3.16)
project(libcatboy LANGUAGES CXX)

# Library
add_subdirectory(ThirdParty/json)
add_subdirectory(ThirdParty/curlpp)

# Source files
add_library(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/catboys.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
      ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# More Library
target_link_libraries(${PROJECT_NAME} 
    curlpp
    nlohmann_json
)