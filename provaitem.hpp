//eu não tenho todos os ultimos programas passados em aula, entao eu fiz a classe item que foi pedido e inclui no ultimo programa que tenho
#include<iostream>
#include<string>

using namespace std;

#ifndef ITEM_HPP
#define ITEM_HPP

class item {

public:
item (const string& nome, int valor); //teria que contar os pontos
string Getnome() const;
int Getvalor() const;


private:
string nome;
int valor;

};
#endif
