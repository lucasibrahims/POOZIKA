#ifndef FORNECEDOR_HPP
#define FORNECEDOR_HPP

#include "Pessoa.hpp"
#include "Proposta.hpp"
#include <vector>


class Fornecedor : public Pessoa {
    vector<Proposta> compras;
    vector<Proposta> propostas;

    public:
    bool gerarProposta(Proposta p);
    bool EfetivarCompra(Proposta p);
};

#endif