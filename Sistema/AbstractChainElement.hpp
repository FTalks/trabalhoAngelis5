/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:09 PM
 */

#ifndef ABSTRACTCHAINELEMENT_HPP
#define ABSTRACTCHAINELEMENT_HPP

#include <string>
#include <memory>

#include "MyDataObject.hpp"
using namespace std;

class AbstractChainElement {
private:
    // atributo (proximo item da cadeia de processamento
    AbstractChainElement * nextElement;
    // metodo de definição do processamento interno (deve ser sobrescrito na class filha)
    virtual void internalProcessing(MyDataObject *) = 0;
    // metodo de captura de paremetros (deve ser sobrescrito na class filha)
    virtual void readParameters();
    // metodo exibir resultado (deve ser sobrescrito na class filha)
    virtual void writeResults(MyDataObject *);

    
public:
    // contrutor
    AbstractChainElement();
    // destrutor
    virtual ~AbstractChainElement();
    // seta o ponteiro para o proximo item da cadeia de processamento
    virtual void setNext(AbstractChainElement * next);
    // recupera o ponteiro para o proximo item da cadeia de processamento
    virtual AbstractChainElement * getNext(void);
    // metodo de controle interno do processamento
    virtual void doProcessing(MyDataObject * value);
    // metodo para pegar o nome da class (deve ser implementada na class filha)
    virtual string getName(void) = 0;
};

#endif /* ABSTRACTCHAINELEMENT_HPP */

