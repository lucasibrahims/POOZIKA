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
    MateriaPrima(string nome_, float quantidade, float estoque_min, string unid_medida);
    MateriaPrima();
    bool SetNomeMateriaPrima(string n);
    string getNomeMateriaPrima();
    vector<Fornecedor> getFornecedores();
    bool InsertFornecedor(Fornecedor f);
    bool SetQuantidadeMateriaPrima(float qnt);
    float getQuantidadeMateriaPrima();
    bool SetEstoqueMinMateriaPrima(float est_min);
    float getEstoqueMinMateriaPrima();
    bool InsertUnidMed(string und);
    bool SetUnidMed(string unidMed);
    string getUnidMed();
    
   
    bool AtualizaQnt(float qnt); //Quando um produto for criado
    bool gerarOrdem();
    bool validaUnidade(string unid_medida);


};






#endif