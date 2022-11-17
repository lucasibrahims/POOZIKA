#include "Cargo.hpp"
#include <iostream> 
#include <string>
#include "Empresa.hpp"
#include <fstream>

// include headers that implement a archive in simple text format
// #include <boost/archive/text_oarchive.hpp>
// #include <boost/archive/text_iarchive.hpp>

bool Cargo::SetNome(string _nome){
  if(nome == _nome)
  return true;
}

bool Cargo::SetFuncionarios(Funcionarios _funcionario){
  funcionarios.push_back(_funcionario);
  return true;
  }
vector<Funcionarios> Cargo::getFuncionarios()
{
   return this->funcionarios;
}

string Cargo::getNome(){
  return this->nome;
  }

