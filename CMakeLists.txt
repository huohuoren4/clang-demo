cmake_minimum_required(VERSION 3.25)
project(clang-demo)
include_directories(header)

# 设置变量
# set(SOURCES "src/foo.cpp" "src/main.cpp")
file(GLOB SOURCES "src/*")

# 生成可执行文件
add_executable(demo ${SOURCES})
