/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   XorCriptoConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 5:50 PM
 */

#ifndef XORCRIPTOCONCRETECHAINELEMENT_HPP
#define XORCRIPTOCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class XorCriptoConcreteChainElement : public AbstractChainElement {
private:
    const string name = "XorCriptoConcreteChainElement";

    /**
     * Chave para encriptação
     */
    string       key = "";

    /**
     * é elevado o numero do caracter da string, com o numero do caracter da key correspondente
     * @param MyDataObject value
     */
    void internalProcessing(MyDataObject * value) override;

    /**
     * lê a chave de encriptação
     */
    void readParameters() override;

public:
    /**
     * constroi setando o próximo como null
     * */
    XorCriptoConcreteChainElement();

    /**
     * destroi setando o próximo como null
     * */
    virtual ~XorCriptoConcreteChainElement();

    /**
     * retorna o atual nome sobrescrevendo o método
     * @return string this->nome
     */
    string getName() override;
};

#endif /* XORCRIPTOCONCRETECHAINELEMENT_HPP */

