//eu não tenho todos os ultimos programas passados em aula, entao eu fiz a classe item que foi pedido e inclui no ultimo programa que tenho
#include<iostream>
#include<string>
#include<vector>
#include "item.hpp"

#ifndef CONEXAOITEM_HPP
#define CONEXAOITEM_HPP

using namespace std;

class conexaoitem {

public:
void adicionaritem(const item& item);
bool removeritem(const string& itemnome);
bool temitem(const string& itemnome) const;
void listaritem() const;


private:

vector <item> itens;

};
#endif
