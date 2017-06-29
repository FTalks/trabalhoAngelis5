/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyDataObject.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:00 PM
 */

#ifndef MYDATAOBJECT_HPP
#define MYDATAOBJECT_HPP

#include <string>
using namespace std;

class MyDataObject {
private:
    string myDataValue; // string que sera processada
public:
    MyDataObject(const string newValue); // construtor
    MyDataObject(const MyDataObject& orig); // construtor de copia
    virtual ~MyDataObject(); // destrutor
    
    virtual void setValue(string newValue); // Seta um novo valor na string de processamento
    virtual string getValue(void); // retorna o valor da string
};

#endif /* MYDATAOBJECT_HPP */

