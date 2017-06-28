/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ToReverseString.hpp
 * Author: Vinicius
 *
 * Created on June 27, 2016, 8:34 PM
 */

#ifndef TOREVERSESTRING_HPP
#define TOREVERSESTRING_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class ToReverseString : public AbstractChainElement {
private:
    const string name = "ToReverseString";
    void internalProcessing(MyDataObject * value) override;

public:
    ToReverseString();
    virtual ~ToReverseString();
    string getName() override;
};

#endif /* TOLOWERCONCRETECHAINELEMENT_HPP */

