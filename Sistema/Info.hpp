/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef INFO_HPP
#define INFO_HPP

#include <string>

using namespace std;

class Info {
private:
    // atributos de armazenam os dados do programa
    static const string institution;
    static const string dept;
    static const string author;
    static const string date;
    static const string sysName;
    static const string sysVersion;
    static const string decoration;

public:
    // metodos para recuperar os dados guardados nesses atributos
    static const string getInstitution();
    static const string getDept();
    static const string getAuthor();
    static const string getDate();
    static const string getSysName();
    static const string getSysVersion();


    // metodo que impime os dados do programa,  e mensagem de boas vindas
    static const void wellcome(void);
    // metodo que impime mensagem de despedida
    static const void goodbye(void);
};

#endif /* INFO_HPP */

