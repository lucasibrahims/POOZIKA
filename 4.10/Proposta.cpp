#include "Proposta.hpp"

    bool Proposta::Efetivar() {
        efetivada = true;
        return 0;
    }

    bool Proposta::getEfetivada() {
        return efetivada;
    }

    bool Proposta::SetOfertaUnit(float f) {
        oferta_unit = f;
        return 0;
    }

    float Proposta::getOfertaUnit() {
        return oferta_unit;
    }

    Proposta::Proposta(float _oferta_unit) {
        efetivada = 0;
        oferta_unit = _oferta_unit;
    }
    Proposta::Proposta(int qnt, float valor_total) {
        efetivada = 0;
        oferta_unit = valor_total/qnt;
    }