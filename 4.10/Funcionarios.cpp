#include "Funcionarios.hpp"

#include <ostream>
#include <string>
#include "Data.hpp"
#include <vector>

  bool Funcionarios::setMatricula(string Matricula) {
    matricula=Matricula;
    return 1;
  }  

  bool Funcionarios::setDataNascimento(Data dataNascimento){
    DataNascimento = dataNascimento;
    return 1;
  }

  bool Funcionarios::setSalario(float salario, Data aumentoSalarioData){

  }

  bool Funcionarios::Admitir(Data dataAdmissao){
    this->Historico.push_back(dataAdmissao);
    return 1;
  }

  bool Funcionarios::Demitir(Data dataDemissao){

    this->Historico.push_back(dataDemissao);
    return 1; 
  }

  bool Promover(Data dataPromocao){
  
  }