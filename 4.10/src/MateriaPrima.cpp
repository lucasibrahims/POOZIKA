#include "MateriaPrima.hpp"

    string p[] = {"Kg", "m3", "m2", "m"};
set<std::string> MateriaPrima::unid_cadastradas(p, p+4);

    bool MateriaPrima::SetNome(string n) {
        nome = n;
        return 0;
    }
    string MateriaPrima::getNome() {
        return nome;
    }

    vector<Fornecedor> MateriaPrima::getFornecedores() {
        return fornecedores;
    }

    bool MateriaPrima::InsertFornecedor(Fornecedor f) {
        fornecedores.push_back(f);
        return 0;
    }

    bool MateriaPrima::SetQuantidade(float qnt) {
        quantidade = qnt;
        return 0;
    }

    float MateriaPrima::getQuantidade() {
        return quantidade;
    }

    bool MateriaPrima::SetEstoqueMin(float est_min) {
        estoque_min = est_min;
        return 0;
    }

    float MateriaPrima::getEstoqueMin() {
        return estoque_min;
    }

    bool MateriaPrima::InsertUnidMed(string und) {
        unid_cadastradas.insert(und);
        return 0;
    }

    string MateriaPrima::getUnidMed() {
        return unid_medida;
    }

    bool MateriaPrima::AtualizaQnt(float qnt) { //Quando um produto for criado
        quantidade -= qnt;
        if(quantidade < estoque_min) gerarOrdem();
        return 0;
    }

    bool MateriaPrima::gerarOrdem() {
        quantidade += estoque_min;
        return 0;
    }


    bool MateriaPrima::validaUnidade(string unid_medida) {
        if( unid_cadastradas.find(unid_medida) == unid_cadastradas.end()) return false;
        return true;
    }
