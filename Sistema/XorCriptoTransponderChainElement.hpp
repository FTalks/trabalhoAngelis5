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

    /**
     * Chave para encriptação
     */
    int       number = 0;

    /**
     * é somado o numero do caracter da key, com o numero do caracter da string correspondente
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
    XorCriptoTransponderChainElement();

    /**
     * destroi setando o próximo como null
     * */
    virtual ~XorCriptoTransponderChainElement();

    /**
     * retorna o atual nome sobrescrevendo o método
     * @return string this->nome
     */
    string getName() override;
};

#endif /* XorCriptoTransponderChainElement_HPP */

