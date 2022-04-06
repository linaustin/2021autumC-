cmake_minimum_required(VERSION 3.21)
project(kendo)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib/jsoncpp/include)
include_directories(lib/jsoncpp/include/json)
include_directories(lib/jsoncpp/src/lib_json)
include_directories(lib/member)

add_executable(kendo

        lib/jsoncpp/include/json/allocator.h
        lib/jsoncpp/include/json/assertions.h
        lib/jsoncpp/include/json/autolink.h
        lib/jsoncpp/include/json/config.h
        lib/jsoncpp/include/json/features.h
        lib/jsoncpp/include/json/forwards.h
        lib/jsoncpp/include/json/json.h
        lib/jsoncpp/include/json/json_features.h
        lib/jsoncpp/include/json/reader.h
        lib/jsoncpp/include/json/value.h
        lib/jsoncpp/include/json/version.h
        lib/jsoncpp/include/json/writer.h
        lib/jsoncpp/src/lib_json/json_reader.cpp
        lib/jsoncpp/src/lib_json/json_tool.h
        lib/jsoncpp/src/lib_json/json_value.cpp
        lib/jsoncpp/src/lib_json/json_valueiterator.inl
        lib/jsoncpp/src/lib_json/json_writer.cpp
        lib/member/kendo.cpp
        lib/member/kendo.h
        lib/member/member.cpp
        lib/member/member.h
        main.cpp)
