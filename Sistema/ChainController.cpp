/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChainController.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:20 PM
 */

#include <iostream>
#include "ChainController.hpp"
#include "Info.hpp"
#include "ToLowerConcreteChainElement.hpp"
#include "ToUpperConcreteChainElement.hpp"
#include "XorCriptoConcreteChainElement.hpp"
#include "XorCriptoTransponderChainElement.hpp"
#include "ToReverseString.hpp"
#include "CountCharConcreteChainElement.hpp"
#include "ToFirstUpperConcreteChainElement.hpp"
#include "Menu.hpp"

using namespace std;

ChainController::ChainController() {
    chainUnits.clear();
    myData = NULL;
}

void ChainController::start(void) {

    vector<string> opcoes({"Sair do Sistema", "Inserir String", "Ver Cadeia", "Adicionar Processamento","Remover Processamento" , "Processar"});
    Menu menu(Info::getSysName(), opcoes);
    int escolha = -1;

    while (escolha) {
        escolha = menu.getEscolha();

        switch (escolha) {
            case 1: {
                cout<<"Digite a string que sera processada:\n";
                string texto= "";
                getline(cin,texto);
                loadData(texto);
            };
                break;
            case 2: {

                cout << "\n------------------------------\n" << "Cadeia de processamento" << "\n------------------------------\n\n";
                for (int i = 0; i < chainUnits.size(); ++i) {
                    cout<<"\t"<<i+1<<" "<<chainUnits[i].get()->getName()<<endl;
                }

            };
                break;
            case 3: {
                createElements();
            };
                break;
            case 4: {
                int index_remove=-1;
                cout << "\tQual a posicao do processamento que deseja remover? ";
                string buffer = "0";
                getline(cin, buffer);
                index_remove = stoi(buffer);
                cout<<endl;
                if(index_remove>0 && index_remove< chainUnits.size()){
                    chainUnits.erase (chainUnits.begin()+index_remove-1);
                }
            };
                break;
            case 5: {
                if (chainUnits.size() > 0) {
                    // prepare the chain, linking the elements
                    prepareChain();
                    // process all elements in the chain
                    processChain();
                } else {
                    // no elements in the chain
                    cout << "Nothing to do... empty chain!" << endl;
                };
            };
                break;
        };
    };


};

void ChainController::loadData(string valor) {

    myData = unique_ptr<MyDataObject>(new MyDataObject(valor));
}

void ChainController::createElements() {
    vector<string> opcoes2({"Voltar", "Contar caracteres", "Primeira letra da palavra maiuscula", "Todos letras minuscula ","Inverter texto" , "Todas lestras maiusculas", "Criptografar por chave", "Criptografar por trasposicao"});
    Menu menu2(Info::getSysName(), opcoes2);
    int escolha2 = -1;

    while (escolha2) {
        escolha2 = menu2.getEscolha();

        switch (escolha2) {
            case 1: {
                chainUnits.push_back(unique_ptr<AbstractChainElement>(new CountCharConcreteChainElement()));
            };
                break;
            case 2: {
                chainUnits.push_back(unique_ptr<AbstractChainElement>(new ToFirstUpperConcreteChainElement()));
            };
                break;
            case 3: {
                chainUnits.push_back(unique_ptr<AbstractChainElement>(new ToLowerConcreteChainElement()));
            };
                break;
            case 4: {
                chainUnits.push_back(unique_ptr<AbstractChainElement>(new ToReverseString()));
            };
                break;
            case 5: {
                chainUnits.push_back(unique_ptr<AbstractChainElement>(new ToUpperConcreteChainElement()));
            };
                break;
            case 6: {
                chainUnits.push_back(unique_ptr<AbstractChainElement>(new XorCriptoConcreteChainElement()));
            };
                break;
            case 7: {
                chainUnits.push_back(unique_ptr<AbstractChainElement>(new XorCriptoTransponderChainElement()));
            };
                break;
        };
    };
}

void ChainController::prepareChain() {
    if (chainUnits.size() > 1) {
        // set the chain
        for (int count = 0; count < (chainUnits.size() - 1); count++) {
            (chainUnits.at(count))->setNext(chainUnits.at(count + 1).get());
        }
    }
}

void ChainController::processChain() {
    cout << "Initial value ...: " << myData->getValue() << endl << endl;
    (chainUnits.at(0))->doProcessing(myData.get());
    cout << "\nFinal value .....: " << myData->getValue() << endl;
}
