//eu não tenho todos os ultimos programas passados em aula, entao eu fiz a classe item que foi pedido e inclui no ultimo programa que tenho
#include <iostream>
#include <string>
#include "provaconexaoitem.hpp"

using namespace std;

void conexaoitem::adicionaritem (const item& novoitem){
itens.push_back(novoitem);
}

bool conexaoitem::removeritem (const string& nome) {
for (auto it = itens.begin(); it != itens.end(); ++it){
if (it->getnome() == nome){
itens.erase(it);
return true;
}
}
return false;
}

bool conexaoitem::temitem (const string& nome) const{
for (const auto& i : itens){
if(i.getnome() == nome){
return true;
}
}
return false;
}

void conexaoitem:listaritem () const{
cout << "itens coletados:\n";
for(const auto& i : itens){
cout << "- " << i.getnome() << "(valor: " << i.getvalor << ")\n";
}
}
