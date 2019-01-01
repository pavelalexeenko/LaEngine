cmake_minimum_required(VERSION 3.12)
project(LaEngine)

set(CMAKE_CXX_STANDARD 17)

add_executable(LaEngine main.cpp Sources/Ecs/Entity.cpp Sources/Ecs/Entity.h Sources/Ecs/Component.cpp Sources/Ecs/Component.h Sources/Ecs/System.cpp Sources/Ecs/System.h Sources/Reflection/Field.cpp Sources/Reflection/Field.h Sources/Reflection/Method.cpp Sources/Reflection/Method.h Sources/Reflection/Type.h Sources/Base/LaObject.cpp Sources/Base/LaObject.h)