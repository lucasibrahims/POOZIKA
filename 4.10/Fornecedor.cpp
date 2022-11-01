#include "Fornecedor.hpp"

    bool Fornecedor::gerarProposta(Proposta p) {
        propostas.push_back(p);
        return 0;
    }
    
    bool Fornecedor::EfetivarCompra(Proposta p) {
        for(vector<Proposta>::iterator it = propostas.begin(); it != propostas.end(); it++) {
            if(*it == p) {
                compras.push_back(*it);
                compras.back().Efetivar();
                propostas.erase(it);
                break;
            }
        }
    }