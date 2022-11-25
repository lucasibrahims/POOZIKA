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

    map< Produto*, pair<int, float>> produtos; //Produto / quantidade / valor total

    public:
    Orcamento(Cliente c, map< Produto*, int> prod, Data d);
    map< Produto*, pair<int, float>> getProdutos() const;
    bool AdicionarFormaDePagamento(string str);
    bool RemoverFormaDePagamento(string str);
    bool Atualizar(); //1: Orçamento já está atualizado | 0: Orçamento foi atualizado
<<<<<<< HEAD:4.10/include/Orcamento.hpp
    bool EfetivarVenda(Data d, string forma_pag, Estoque *estoque);
=======
    bool EfetivarVenda(Data d, string forma_pag);
>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Orcamento.hpp
    Data getDataOrcamento();
    void imprimeOrcamento();


};




#endif