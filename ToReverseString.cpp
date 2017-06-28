/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ToReverseString.cpp
 * Author: Vinicius
 * 
 * Created on June 27, 2016, 8:34 PM
 */

#include <cctype>
#include<bits/stdc++.h>
#include "ToReverseString.hpp"

ToReverseString::ToReverseString()
   {
   this->setNext(NULL);
   }

ToReverseString::~ToReverseString()
   {
   this->setNext(NULL);
   }

string ToReverseString::getName()
   {
   return (this->name);
   }

void ToReverseString::internalProcessing(MyDataObject * value)
   {
   string buffer = value->getValue();

       reverse(buffer.begin(),buffer.end());

   value->setValue(buffer);
   }
