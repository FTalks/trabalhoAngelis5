/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   XorCriptoTransponderChainElement.hpp
 * Author: Vinicius
 *
 * Created on June 28, 2016, 6:41 PM
 */

#ifndef XorCriptoTransponderChainElement_HPP
#define XorCriptoTransponderChainElement_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class XorCriptoTransponderChainElement : public AbstractChainElement {
private:
    const string name = "XorCriptoTransponderChainElement";
    int       number = 0;
    
    void internalProcessing(MyDataObject * value) override;
    void readParameters() override;

public:
    XorCriptoTransponderChainElement();
    virtual ~XorCriptoTransponderChainElement();
    string getName() override;
};

#endif /* XorCriptoTransponderChainElement_HPP */

