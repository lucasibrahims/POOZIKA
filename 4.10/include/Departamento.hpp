#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

using namespace std;
#include <ostream>
#include <string>
#include "Cargo.hpp"

class Departamento {
private:
string nome;
vector<Cargo> cargos;

public:
Departamento (string _nome);
bool SetNome(string _nome);
bool SetCargos(Cargo _cargos);
string getNome();
vector<Cargo> getCargos();

};


#endif