#ifndef  EMPRESA_HPP
#define  EMPRESA_HPP

#include <vector>
#include "Cliente.hpp"
#include "Validacao.hpp"

using namespace std;

class Empresa{
  private:
    string nome;
    string Cnpj;
    //vector<Departamento> Departamentos;
    vector<Cliente> clientesFisicos;
    vector<Cliente> clientesJuridicos;
    static Empresa *EmpresaPtr;
    Empresa(string nome, string Cnpj);
    Empresa();
    


  public:
    char getch();
    static Empresa *Instance();
    bool setNome(string);
    bool setCnpj(string);
    //bool setDepartamentos(Departamento Departamentos);
    bool setClienteFisico(Cliente ClientesFisicos);
    bool setClienteJuridico(Cliente ClientesJuridicos);
    bool dissidioColetivo(float taxa);
    string getNome();    
    string getCnpj();
    //Departamento& getDepartamentos(size_t indice);
    Cliente& getclientesFisicos(size_t indice);
    Cliente& getclientesJuridicos(size_t indice);
    
  

  


};
#endif