cmake_minimum_required(VERSION 3.7)
project(trabalhoAngelis5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        AbstractChainElement.cpp
        AbstractChainElement.hpp
        ChainController.cpp
        ChainController.hpp
        CountCharConcreteChainElement.cpp
        CountCharConcreteChainElement.hpp
        Info.cpp
        Info.hpp
        Menu.cpp
        Menu.hpp
        MyDataObject.cpp
        MyDataObject.hpp
        StartChain.cpp
        ToFirstUpperConcreteChainElement.cpp
        ToFirstUpperConcreteChainElement.hpp
        ToLowerConcreteChainElement.cpp
        ToLowerConcreteChainElement.hpp
        ToReverseString.cpp
        ToReverseString.hpp
        ToUpperConcreteChainElement.cpp
        ToUpperConcreteChainElement.hpp
        XorCriptoConcreteChainElement.cpp
        XorCriptoConcreteChainElement.hpp
        XorCriptoTransponderChainElement.cpp
        XorCriptoTransponderChainElement.hpp)

add_executable(trabalhoAngelis5 ${SOURCE_FILES})