/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChainController.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:20 PM
 */

#ifndef CHAINCONTROLLER_HPP
#define CHAINCONTROLLER_HPP

#include "AbstractChainElement.hpp"
#include "MyDataObject.hpp"
#include <vector>
#include <memory>

using namespace std;

class ChainController {
private:

    // vetor de smart poiters dos objetos da cadeia de procesamento
    vector<unique_ptr<AbstractChainElement>> chainUnits;
    //smart poiter do objeto de Mydata (contem o item que sera processado
    unique_ptr<MyDataObject> myData;
public:
    // construtor
    ChainController();
    // metodo que contem o menu e chama os demais metodos (ponto inicial do programa)
    void start();
    // le do usuario a string que sera processada
    void loadData(string valor);
    // starta o processamento da cadeia
    void processChain();
    // prepara a cadeia passando os itens do vetor para os ponteiros dentro de abstractchainElement
    void prepareChain();
    // metodo responsavel por adicionar item de processamento a cadeia
    void createElements();

};

#endif /* CHAINCONTROLLER_HPP */

