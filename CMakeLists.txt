cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(sized_types LANGUAGES C)

# Library
add_library(sized_types INTERFACE)
target_include_directories(sized_types INTERFACE "./include")
