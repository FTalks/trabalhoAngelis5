/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ToFirstUpperConcreteChainElement.hpp
 * Author: Kaue
 *
 * Created on June 9, 2016, 8:25 PM
 */

#ifndef TOFIRSTUPPERCONCRETECHAINELEMENT_HPP
#define TOFIRSTUPPERCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class ToFirstUpperConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToFirstUpperConcreteChainElement";

    /**
     * Recebe um MyDataObject e altera o valor dele de forma que a primeira letra de cada palavra se torne maiúscula
     * @param MyDataObject value
     */
    void internalProcessing(MyDataObject* value) override;

public:
    /**
     * constroi setando o próximo como null
     * */
    ToFirstUpperConcreteChainElement();

    /**
     * destroi setando o próximo como null
     * */
    virtual ~ToFirstUpperConcreteChainElement();

    /**
     * retorna o atual nome sobrescrevendo o método
     * @return string this->nome
     */
    string getName() override;
};

#endif /* TOFIRSTUPPERCONCRETECHAINELEMENT_HPP */

