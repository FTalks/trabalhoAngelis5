/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MENU_H

#define MENU_H

#include <string>
#include <vector>

using namespace std;

class Menu
   {
   private:
      string titulo; // atributo que armazena o titulo do menu
      vector<string> opcoes; // atributo que armazena as opções do menu

   public:
      Menu(string titulo, vector<string> opcoes); // contrutor
      const virtual int getEscolha(); // metodo que imprime o menu e captura escolha do usuario
   };
   
#endif
   
/* fim de arquivo */