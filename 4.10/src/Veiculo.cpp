#include "Veiculo.hpp"

    bool Veiculo::SetPlaca(string p) {
        placa = p;
        return 0;
    }

    string Veiculo::getPlaca() {
        return placa;
    }

    bool Veiculo::SetCor(string c) {
        cor = c;
        return 0;
    }
    string Veiculo::getCor() {
        return cor;
    }

    bool Veiculo::SetCapacidadeMax(int c) {
        capacidade_max = c;
        return 0;
    }
    
    int Veiculo::getCapacidadeMax() {
        return capacidade_max;
    }
    bool Veiculo::SetRota(Rota* r) {
        rota = r;
        return 0;
    }

    Veiculo::Veiculo(string placa_, string cor_, int cap_max) {
        placa = placa_;
        cor = cor_;
        capacidade_max = cap_max;
    }

    bool Veiculo::operator==(Veiculo& dir) {
        if(placa == dir.getPlaca()) return 1;
        return 0;
    }