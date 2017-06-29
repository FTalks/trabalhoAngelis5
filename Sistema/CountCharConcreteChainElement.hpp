/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CountCharConcreteChainElement.hpp
 * Author: kaue
 *
 * Created on June 28, 2017, 8:26 PM
 */

#ifndef COUNTCHARCONCRETECHAINELEMENT_HPP
#define COUNTCHARCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class CountCharConcreteChainElement : public AbstractChainElement {
private:
    // atributo que armazena o nome da class
    const string name = "CountCharConcreteChainElement";
    // sobreescrita do metodo que devido o tipo de processamento (processamento especifico da classe filha)
    void internalProcessing(MyDataObject* value) override;
    // sobreescrita do metodo que escreve o resultado (processamento especifico da classe filha)
    void writeResults(MyDataObject * value) override;

public:
    // construtor
    CountCharConcreteChainElement();
    // destrutor
    virtual ~CountCharConcreteChainElement();
    // metodo para pegar o nome da classe
    string getName() override;
};

#endif /* COUNTCHARCONCRETECHAINELEMENT_HPP */

