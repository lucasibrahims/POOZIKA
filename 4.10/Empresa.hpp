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
    string endereco;
    pair<float, float> coordenadas;
    // vector<Departamento> Departamentos;
    vector<Cliente> clientesFisicos;
    vector<Cliente> clientesJuridicos;
    static Empresa *EmpresaPtr;
    Empresa(string nome, string Cnpj);
    Empresa();
    


  public:
    char getch();
    static Empresa *Instance();
    bool setNomeEmpresa(string);
    bool setCnpjEmpresa(string);
    bool SetEnderecoEmpresa(string s);
    string getEnderecoEmpresa();
    bool SetCoordenadasEmpresa(float x, float y);
    pair<float,float> getCoordenadasEmpresa();
    //bool setDepartamentos(Departamento Departamentos);
    bool setClienteFisico(Cliente ClientesFisicos);
    bool setClienteJuridico(Cliente ClientesJuridicos);
    bool dissidioColetivo(float taxa);
    string getNomeEmpresa();    
    string getCnpjEmpresa();
    //Departamento& getDepartamentos(size_t indice);
    Cliente& getclientesFisicos(size_t indice);
    Cliente& getclientesJuridicos(size_t indice);
    
  

  


};
#endif