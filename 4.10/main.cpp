#include <iostream>
#include "Produto.hpp"
#include "Lote.hpp"
#include "Estoque.hpp"

using namespace std;

int main() {

    vector<float> v1(1, 32.20);
    vector<float> v2(1, 5.0);

    Data d1(2022, 10, 5, 2, 30, 0);
    Data d2(2022, 8, 10, 2, 30, 0);
    Data d3(2022, 4, 17, 2, 30, 0);

    //Criando produtos para testes
    Produto QueijoMinas("Queijo Minas", "AB3F43", v1, "Alimentos", 100, 300);
    Produto Ketchup("Ketchup", "BGGFD32", v2, "Alimentos", 100, 50);
    Produto FitaCrepe("Fita Crepe", "99UIUDF3", v1, "Utilidades", 1000, 100);

    //Criando lotes para cada
    Lote Lote11(d1, "3030", QueijoMinas.getLote_min(), 500, QueijoMinas);
    Lote Lote12(d2, "3131", QueijoMinas.getLote_min(), 500, QueijoMinas);
        vector<Lote> LotesAtuais1;
        LotesAtuais1.push_back(Lote11);
        LotesAtuais1.push_back(Lote12);

    Lote Lote21(d2, "4141", Ketchup.getLote_min(), 300, Ketchup);
    Lote Lote22(d2, "4242", Ketchup.getLote_min(), 300, Ketchup);
    Lote Lote23(d3, "3043", Ketchup.getLote_min(), 300, Ketchup);
        vector<Lote> LotesAtuais2;
        LotesAtuais2.push_back(Lote21);
        LotesAtuais2.push_back(Lote22);
        LotesAtuais2.push_back(Lote23);

    Lote Lote31(d3, "5050", FitaCrepe.getLote_min(), 3000, FitaCrepe);
        vector<Lote> LotesAtuais3;
        LotesAtuais3.push_back(Lote31);

    //Criando cada estoque
    Estoque Estoque1(LotesAtuais1);
    Estoque Estoque2(LotesAtuais2);
    Estoque Estoque3(LotesAtuais3);

    Estoque1.imprimeEstoque();
    Estoque2.imprimeEstoque();
    Estoque3.imprimeEstoque();
};
