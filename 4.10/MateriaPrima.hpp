#ifndef MATERIAPRIMA_HPP
#define MATERIAPRIMA_HPP

#include "Fornecedor.hpp"
#include <set>

class MateriaPrima {
    string nome;
    vector<Fornecedor> fornecedores;
    float quantidade;
    float estoque_min;
    string unid_medida;
    static set<string> unid_cadastradas;

    public: 
    bool SetNome(string n);
    string getNome();
    vector<Fornecedor> getFornecedores();
    bool InsertFornecedor(Fornecedor f);
    bool SetQuantidade(float qnt);
    float getQuantidade();
    bool SetEstoqueMin(float est_min);
    float getEstoqueMin();
    bool InsertUnidMed(string und);
    string getUnidMed();

    bool AtualizaQnt(float qnt); //Quando um produto for criado
    bool gerarOrdem();
    bool validaUnidade(string unid_medida);


};






#endif