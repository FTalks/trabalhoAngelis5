/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toLowerConcreteChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:34 PM
 */

#include <cctype>
#include "CountCharConcreteChainElement.hpp"

CountCharConcreteChainElement::CountCharConcreteChainElement() {
    this->setNext(NULL);
}

CountCharConcreteChainElement::~CountCharConcreteChainElement() {
    this->setNext(NULL);
}

string CountCharConcreteChainElement::getName() {
    return (this->name);
}

void CountCharConcreteChainElement::internalProcessing(MyDataObject *value) {


}
void CountCharConcreteChainElement::writeResults(MyDataObject * value) {
    string buffer = value->getValue();
    string response = "A string contem " + to_string(buffer.length()) + " caracteres";
}