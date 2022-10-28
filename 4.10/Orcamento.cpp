#include "Orcamento.hpp"

using namespace std;

string p[] = {"Boleto em 30 dias", "Boleto em 60 dias", "Boleto em 90 dias", 
                "Cartao a vista", "Cartao em 2x", "Cartao em 3x", "Cartao em 4x", "Cartao em 5x", "Cartao em 6x", "Pix"};
set<std::string> Orcamento::formasDePagamento(p, p+10);

Orcamento::Orcamento(Cliente c, map< Produto*, int> prod, Data d) {
    cliente = c; //Conferir se o cliente ja foi cadastrado

    for(map<Produto*, int>::iterator it = prod.begin(); it != prod.end(); it++) {
        
        pair<int, float> QntPreco(it->second, it->second * it->first->getValor());
        produtos[it->first] = QntPreco;

    }

    data = d;

}

bool Orcamento::AdicionarFormaDePagamento(string str) {

    if( formasDePagamento.find(str) != formasDePagamento.end() ) return 1; // Metodo ja existe na lista

    formasDePagamento.insert(str);
    return 0;

}

bool Orcamento::RemoverFormaDePagamento(string str) {

    if (formasDePagamento.find(str) == formasDePagamento.end() ) return 1; //Metodo nao existe na lista

    formasDePagamento.erase(str);
    return 0;

}

bool Orcamento::Atualizar() {
    bool orcamentoAtualizado = true;

    for(map< Produto*, pair<int, float>>::iterator it = produtos.begin(); it != produtos.end(); it++) {

        float valorUnitRegistrado = it->second.second / it->second.first;
        if(it->first->getValor() != valorUnitRegistrado) {
            orcamentoAtualizado = false;
            cout << it->first->getNome() << " foi atualizado de R$" << valorUnitRegistrado << " para R$" << it->first->getValor() << " a unidade" << endl;
            
            //Atualizando o valor total
            it->second.second = it->second.first * it->first->getValor();

        }
    }

    return orcamentoAtualizado;
}

bool Orcamento::EfetivarVenda(Data d, std::string forma_pag, Estoque* estoque) {
    //Conferir se o método de pagamento é válido
    if( formasDePagamento.find(forma_pag) == formasDePagamento.end()) return 1;

    //Conferir a validade dos preços do orçamento e atualizá-los
    if(this->Atualizar()) cout << "Orcamento esta atual!" << endl;

    //Criar vendas
    vector<Venda> vendas;
    for(map<Produto*, pair<int, float>>::iterator it = produtos.begin(); it != produtos.end(); it++) {

        Venda v(d, it->first, it->second.first, estoque);
        vendas.push_back(v);

    }

    Cliente.

    return 0;
}

map< Produto*, pair<int, float>> Orcamento::getProdutos() const {
    return produtos;
}

Data Orcamento::getData() {
    return data;
}

void Orcamento::imprimeOrcamento() {
    map< Produto*, pair<int, float>>::iterator it = produtos.begin();

    cout << "---- Orcamento de " << it->first->getNome() << " ----" << endl;
    cout << "Valores vigentes no dia " << data.getData() << endl;

    for(;it != produtos.end(); it++) {
        cout << it->first->getNome() << ": " << it->second.first << " unidade(s) por R$" << it->second.second << endl;

    }
}