#ifndef FUNCIONARIOS_HPP
#define FUNCIONARIOS_HPP

#include <ostream>
#include <vector>
#include <string>
#include <map>
#include "Data.hpp"
#include "Pessoa.hpp"
#include <vector>


class Funcionarios : public Pessoa {
private:
  std::string matricula;
  Data DataNascimento;
  vector <Data> Historico;
  map <std::string,Data> Salario;
  bool ativo;

public:
  float salarioInicial;
  bool setMatricula(string Matricula);
  bool setDataNascimento(Data dataNascimento);
  bool setSalario (float salario, Data aumentoSalarioData);
  std::string getMatrícula();
  Data getDataNascimento();
  float getSalario();
  float getHistórico();
  bool Admitir(Data dataAdmissao);
  bool Demitir(Data dataDemissao);
  bool Promover(Data dataPromocao);
};

#endif  // FUNCIONARIOS_HPP