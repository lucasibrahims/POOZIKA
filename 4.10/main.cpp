#include <iostream>
#include "Orcamento.hpp"
#include <map>
#include "Produto.hpp"
#include "Lote.hpp"
#include "Estoque.hpp"
#include "Venda.hpp"
#include "Data.hpp"
#include "Cliente.hpp"
using namespace std;


int main() {

    vector<float> v1(1, 32.20);
    vector<float> v2(1, 5.0);

    Data d1(2022, 10, 5, 2, 30, 0);
    Data d2(2022, 8, 10, 2, 30, 0);
    Data d3(2022, 4, 17, 2, 30, 0);

    // //Criando produtos para testes
    Produto QueijoMinas("Queijo Minas", "AB3F43", v1, "Alimentos", 100, 300);
    Produto Ketchup("Ketchup", "BGGFD32", v2, "Alimentos", 100, 50);
    Produto FitaCrepe("Fita Crepe", "99UIUDF3", v1, "Utilidades", 1000, 100);


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
     Estoque Estoque2(LotesAtuais2);
     Estoque Estoque3(LotesAtuais3);

    Estoque2.imprimeEstoque();
    Estoque3.imprimeEstoque();


    map<Produto*, pair<int, float>> prod;
    pair<int, float> p(10, QueijoMinas.getValor()*10);
    pair<int, float> q(30, Ketchup.getValor()*30);
    pair<int, float> r(25, FitaCrepe.getValor()*25);

    prod[&QueijoMinas] = p;
    prod[&Ketchup] = q;
    prod[&FitaCrepe] = r;
    
    Cliente c;

    Orcamento o(c, prod, d1);
    o.imprimeOrcamento();

    QueijoMinas.SetValor(40.0);
    FitaCrepe.SetValor(100.0);
    
    map< reference_wrapper<Produto>, pair<int, float>>::iterator it = o.getProdutos().begin();
    cout << it->first.get().getValor();

    if( !o.Atualizar() ) cout << "Orcamento desatualizado foi corrigido" << endl;
    o.imprimeOrcamento();
//(Data data, Produto *prod, int qnt, vector<Lote> LotesComprados, Estoque estoque)
    // Venda queijo(d2, &QueijoMinas,300, LotesAtuais2, Estoque2);
    // cout << queijo.ValidaQuantidade(200) << endl;
    // queijo.AtualizaEstoque();
};
