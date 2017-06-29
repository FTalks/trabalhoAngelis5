/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toUpperConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 5:17 PM
 */

#ifndef TOUPPERCONCRETECHAINELEMENT_HPP
#define TOUPPERCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class ToUpperConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToUpperConcreteChainElement";

    /**
     * Recebe um MyDataObject e altera o valor dele de forma que a string fique invertida EX: recebe ABC e retorna CBA
     * @param MyDataObject value
     */
    void internalProcessing(MyDataObject * value) override;

public:
    /**
     * constroi setando o próximo como null
     * */
    ToUpperConcreteChainElement();

    /**
     * destroi setando o próximo como null
     * */
    virtual ~ToUpperConcreteChainElement();

    /**
     * retorna o atual nome sobrescrevendo o método
     * @return string this->nome
     */
    string getName() override;
};

#endif /* TOUPPERCONCRETECHAINELEMENT_HPP */

