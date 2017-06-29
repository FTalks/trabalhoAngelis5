/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toLowerConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:34 PM
 */

#ifndef TOLOWERCONCRETECHAINELEMENT_HPP
#define TOLOWERCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class ToLowerConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToLowerConcreteChainElement";

    /**
     * Recebe um MyDataObject e altera o valor dele de forma que todas as letras se tornem minúsaculas
     * @param MyDataObject value
     */
    void internalProcessing(MyDataObject * value) override;

public:
    /**
     * constroi setando o próximo como null
     * */
    ToLowerConcreteChainElement();

    /**
     * destroi setando o próximo como null
     * */
    virtual ~ToLowerConcreteChainElement();

    /**
     * retorna o atual nome sobrescrevendo o método
     * @return string this->nome
     */
    string getName() override;
};

#endif /* TOLOWERCONCRETECHAINELEMENT_HPP */

