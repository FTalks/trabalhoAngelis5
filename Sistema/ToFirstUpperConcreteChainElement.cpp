/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ToFirstUpperConcreteChainElement.cpp
 * Author: Kaue
 * 
 * Created on June 9, 2016, 8:25 PM
 */

#include <cctype>
#include <cstring>
#include <iostream>
#include "ToFirstUpperConcreteChainElement.hpp"

ToFirstUpperConcreteChainElement::ToFirstUpperConcreteChainElement() {
    this->setNext(NULL);
}

ToFirstUpperConcreteChainElement::~ToFirstUpperConcreteChainElement() {
    this->setNext(NULL);
}

string ToFirstUpperConcreteChainElement::getName() {
    return (this->name);
}

void ToFirstUpperConcreteChainElement::internalProcessing(MyDataObject *value) {
    string buffer = value->getValue();

    for (int i = 0; i < buffer.length(); i++) {
        if(i==0)
            buffer[0] = toupper(buffer[0]);
        else if (buffer[i - 1] == ' ')
            buffer[i] = toupper(buffer[i]);
        else
            buffer[i] = tolower(buffer[i]);
    }

    value->setValue(buffer);
}
