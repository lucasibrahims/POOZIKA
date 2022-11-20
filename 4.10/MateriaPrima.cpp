#include "MateriaPrima.hpp"

MateriaPrima::MateriaPrima(){

}

MateriaPrima::MateriaPrima(string nome_, float quantidade_, float estoqueMin, string uniMed_){
    this->nome = nome_;
    this->quantidade = quantidade_;
    this->estoque_min = estoqueMin;
    this->unid_medida = uniMed_;
}

    string p[] = {"Kg", "m3", "m2", "m", "unidades"};
set<std::string> MateriaPrima::unid_cadastradas(p, p+5);

    bool MateriaPrima::SetNomeMateriaPrima(string n) {
        nome = n;
        return 0;
    }
    string MateriaPrima::getNomeMateriaPrima() {
        return nome;
    }

    vector<Fornecedor> MateriaPrima::getFornecedores() {
        return fornecedores;
    }
    bool MateriaPrima::SetUnidMed(string unidMed){
        this->unid_medida = unidMed;
        return 0;
    }

    bool MateriaPrima::InsertFornecedor(Fornecedor f) {
        fornecedores.push_back(f);
        return 0;
    }

    bool MateriaPrima::SetQuantidadeMateriaPrima(float qnt) {
        quantidade = qnt;
        return 0;
    }

    float MateriaPrima::getQuantidadeMateriaPrima() {
        return quantidade;
    }

    bool MateriaPrima::SetEstoqueMinMateriaPrima(float est_min) {
        estoque_min = est_min;
        return 0;
    }

    float MateriaPrima::getEstoqueMinMateriaPrima() {
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

