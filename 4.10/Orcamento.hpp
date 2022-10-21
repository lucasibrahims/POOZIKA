#ifndef ORCAMENTO_HPP
#define ORCAMENTO_HPP

#include "Cliente.hpp"
#include "Produto.hpp"
#include "Data.hpp"
#include <map>
#include <set>
#include <string.h>
#include <iostream>

class Orcamento {

    Cliente cliente;
    static set<string> formasDePagamento;
    Data data;

    map< reference_wrapper<Produto>, pair<int, float>> produtos; //Produto / quantidade / valor total

    public:
    Orcamento(Cliente c, map< reference_wrapper<Produto>, int> prod, Data d);
    map< reference_wrapper<Produto>, pair<int, float>> getProdutos() const;
    bool AdicionarFormaDePagamento(string str);
    bool RemoverFormaDePagamento(string str);
    bool Atualizar(); //1: Orçamento já está atualizado | 0: Orçamento foi atualizado
    bool EfetivarVenda(Data d, string forma_pag);
    Data getData();
    void imprimeOrcamento();


};




#endif