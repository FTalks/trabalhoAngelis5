/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   XorCriptoTransponderChainElement.cpp
 * Author: Vinicius
 * 
 * Created on June 28, 2016, 6:41 PM
 */

#include <cctype>
#include <iostream>
#include "XorCriptoTransponderChainElement.hpp"

XorCriptoTransponderChainElement::XorCriptoTransponderChainElement() {
    this->setNext(NULL);
}

XorCriptoTransponderChainElement::~XorCriptoTransponderChainElement() {
    this->setNext(NULL);
}

string XorCriptoTransponderChainElement::getName() {
    return (this->name);
}

void XorCriptoTransponderChainElement::internalProcessing(MyDataObject *value) {

    if (number > 0) {
        string buffer = value->getValue();
        for (int count = 0; count < buffer.size(); count++) {
            buffer.at(count) = (char) (((int) buffer.at(count)) + this->number);
        }
        value->setValue(buffer);
    }
}

void XorCriptoTransponderChainElement::readParameters() {
    int number;

    cout << "\t\tWhat is the criptografic number transponder? ";
    string buffer = "0";
    getline(cin, buffer);
    this->number = stoi(buffer);
    cout << endl;

}
