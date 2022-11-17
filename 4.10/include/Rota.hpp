#include "Funcionarios.hpp"
#include "Data.h"
#include <vector>

class Rota {
    float velocidade_media;
    vector<Funcionarios*> passageiros;
    float tempo_min;
    float dist_total;

    public:
    bool SetVelocidadeMedia(float vm);
    float getVelocidadeMedia();
    float getTempoMin(); //Set é interno
    float getDistTotal(); //Set é interno
    bool InsertPassageiro(Funcionarios* f);
    bool RemovePassageiro(Funcionarios* f);
    vector<Funcionarios*> getPassageiros();

    Rota(vector<Funcionarios*> pass, float vm=0);

    // float calculaDistRota();
    // Data CalculaHoraSaida();

};