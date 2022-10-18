#include "Departamento.hpp"

Departamento::Departamento (string _nome){
  this->nome = _nome;
}

bool Departamento::SetNome(string _nome)
{
  this->nome = _nome;
  return true;
}

string Departamento::getNome(){
  return this->nome;
}
bool Departamento::SetCargos(Cargo _cargo)
{
  cargos.push_back(_cargo);
  return true;
}
vector<Cargo> Departamento::getCargos()
{
  return this->cargos;
}