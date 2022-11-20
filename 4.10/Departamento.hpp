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
bool SetNomeDepartamento(string _nome);
bool SetCargosDepartamento(Cargo _cargos);
string getNomeDepartamento();
vector<Cargo> getCargosDepartamento();

};


#endif