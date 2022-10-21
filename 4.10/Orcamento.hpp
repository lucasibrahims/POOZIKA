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
    map<Produto, int> produtos;
    static set<std::string> formasDePagamento;
    Data data;
    map<Produto, float> valorTotal;

    public:
    Orcamento(Cliente c, map<Produto, int> prod, Data d);
    bool AdicionarFormaDePagamento(string str);
    bool RemoverFormaDePagamento(string str);
    //bool EfetivarVenda(Data d, std::string forma_pag);
    Data getData();

    void imprimeOrcamento();


};




#endif