#include "Rota.hpp"
#include <math.h>

float calculaDistancia (float x1, float y1, float x2, float y2) {
    return 110.57 * sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
}


bool Rota::SetVelocidadeMedia(float vm) {
    velocidade_media = vm;
    return 0;
}

float Rota::getVelocidadeMedia() {
    return velocidade_media;
}

float Rota::getTempoMin() {
    return tempo_min;
}

float Rota::getDistTotal() {
    return dist_total;
}

bool Rota::InsertPassageiro(Funcionarios* f) {
    passageiros.push_back(f);
    return 0;
}

bool Rota::RemovePassageiro(Funcionarios* f) {
    for(vector<Funcionarios*>::iterator it = passageiros.begin(); it != passageiros.end(); it++) {
        if(*it == f) passageiros.erase(it);
    }
    return 0;
}

vector<Funcionarios*> Rota::getPassageiros() {
    return passageiros;
}

Rota::Rota(vector<Funcionarios*> pass, float vm=0) {
    velocidade_media = vm;
    passageiros = pass;
    //dist_total = calculaDistRota()
}

//float Rota::calculaDistRota();
//     Data CalculaHoraSaida();