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
    /**
     * Recebe um MyDataObject e altera o valor dele de forma que a string fique invertida EX: recebe ABC e retorna CBA
     * @param MyDataObject value
     */
    void internalProcessing(MyDataObject * value) override;

public:
    /**
     * constroi setando o próximo como null
     * */
    ToReverseString();

    /**
     * destroi setando o próximo como null
     * */
    virtual ~ToReverseString();

    /**
     * retorna o atual nome sobrescrevendo o método
     * @return string this->nome
     */
    string getName() override;
};

#endif /* TOLOWERCONCRETECHAINELEMENT_HPP */

