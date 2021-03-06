/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:09 PM
 */

#include "AbstractChainElement.hpp"
#include <cstdlib>
#include <iostream>

using namespace std;

// Construtor AbstractChainElement

AbstractChainElement::AbstractChainElement()
   {
   nextElement = NULL;
   }

// Destrutor AbstractChainElement

AbstractChainElement::~AbstractChainElement()
   {
   nextElement = NULL;
   }

// Seta o ponteiro para o proximo item de processamento

void AbstractChainElement::setNext(AbstractChainElement * next)
   {
   this->nextElement = next;
   }

// pega o ponteiro para o proximo item de processamento

AbstractChainElement* AbstractChainElement::getNext()
   {
   return this->nextElement;
   }

// Metodo de controle do processamento

void AbstractChainElement::doProcessing(MyDataObject * value)
   {
   if(value != NULL)
      {
      cout << "\t" << this->getName() << ":" << endl;
      
      this->readParameters();
      
      cout << "\t\tFrom ..: " << value->getValue() << endl;
      internalProcessing(value);
      cout << "\t\tTo ....: " << value->getValue() << endl;
      writeResults(value);
      if(this->nextElement != NULL)
         {
         nextElement->doProcessing(value);
         }
      }
   }

// Metodo de captura de parametros

void AbstractChainElement::readParameters()
   {
   // do nothing. May be overrided only if it was necessary.
   }

//  Metodo para impressão de resulta

void AbstractChainElement::writeResults(MyDataObject *)
{
   // do nothing. May be overrided only if it was necessary.
}
