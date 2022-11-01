#ifndef PROPOSTA_HPP
#define PROPOSTA_HPP

class Proposta {
    bool efetivada;
    float oferta_unit;

    public:
    bool getEfetivada();
    bool Efetivar();
    bool SetOfertaUnit(float f);
    float getOfertaUnit();
    Proposta(float _oferta_unit);
    Proposta(int qnt, float valor_total);

    bool operator==(Proposta &p) {
        if(efetivada == p.getEfetivada()) {
            if(oferta_unit == p.getOfertaUnit()) return true;
        }

        return false;
    }
};


#endif