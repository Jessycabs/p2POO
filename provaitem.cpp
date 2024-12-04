//eu não tenho todos os ultimos programas passados em aula, entao eu fiz a classe item que foi pedido e inclui no ultimo programa que tenho
#include <string>
#include "provaitem.hpp"

using namespace std;

item::item (const string& nome, int valor) : nome(nome), valor(valor){}

string item::getnome() const {
return nome;
}

int item::getvalor() const {
return valor;
}

