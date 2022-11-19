#include <iostream>
//#include "Orcamento.hpp"
#include <map>
#include "Produto.hpp"
#include "Lote.hpp"
#include "Estoque.hpp"
#include "Venda.hpp"
#include "Data.hpp"
#include "Funcionarios.hpp"
#include "Pessoa.hpp"
#include "MateriaPrima.hpp"

using namespace std;


int main() {
// 1- Instanciar um objeto da classe Empresa. 
// 2-Instanciar um objeto de um usuário logado que deverá ter permissão de acesso à todas as funcionalidades, exceto ao método que realiza a exclusão de um funcionário.
// 3-Comprovar o funcionamento do singleton do usuário logado. 
// ok 4-Cadastrar três funcionários. 
// 5-Cadastrar dois clientes, sendo um PF e outro PJ. 
// ok 6-Cadastrar o produto Mesa (estoque mínimo: 20 unidades), que, para sua produção, necessita das matérias-primas e quantidades abaixo, que também devem ser cadastradas. ▪ Madeira: 450g (estoque mínimo: 1 Kg) ▪ Plástico: 150g (estoque mínimo: 1 Kg) ▪ Alumínio: 100g (estoque mínimo: 1 Kg) ▪ Parafusos: 8 unidades (estoque mínimo: 20 unidades)
// 7-Devem ser produzidos lotes de mesa para atender o estoque mínimo 
// 8-Tentar excluir um funcionário cadastrado no sistema
// 9-O cliente PJ deve solicitar um orçamento para aquisição de 10 mesas. Em função da previsão de falta de matéria-prima, após a geração desse orçamento, o preço da mesa deve sofrer um aumento de 5%. Em seguida o cliente decide adquirir as 10 mesas, mesmo após o aumento.
// 10-Deve ser cadastrada a rota de um veículo para transporte dos três funcionários cadastrados trabalharem no turno da manhã que se inicia às 8h. Devem ver exibidos os horários em que cada funcionário deverá embarcar.
// 11-Por fim, deve-se exibir os logs de todas as operações realizadas.


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

    // Estoque1.imprimeEstoque();
    // Estoque2.imprimeEstoque();
    // Estoque3.imprimeEstoque();


   /* map< reference_wrapper<Produto>, int> prod;
    prod[QueijoMinas] = 10;
    prod[Ketchup] = 10;
    prod[FitaCrepe] = 1;
    
    Cliente c;

    Orcamento o(c, prod, d1);
    o.imprimeOrcamento();

    QueijoMinas.SetValor(40.0);
    FitaCrepe.SetValor(100.0);
    
    map< reference_wrapper<Produto>, pair<int, float>>::iterator it = o.getProdutos().begin();
    cout << it->first.get().getValor();

    if( !o.Atualizar() ) cout << "Orcamento desatualizado foi corrigido" << endl;
    o.imprimeOrcamento();*/
//(Data data, Produto *prod, int qnt, vector<Lote> LotesComprados, Estoque estoque)
    // Venda queijo(d2, &QueijoMinas,300, LotesAtuais2, Estoque2);
    // cout << queijo.ValidaQuantidade(200) << endl;
    // queijo.AtualizaEstoque();
    //◦Instanciar um objeto da classe Empresa.
//Empresa empresa("amazon", "12345678910");

//◦Cadastrar três funcionários.

Funcionarios funcionario1("João", "074.581.325-10", "20221233", 12.5, 10.1);
Funcionarios funcionario2("Maria", "074.581.325-20", "20221234", 12.1, 10.2);
Funcionarios funcionario3("José", "074.581.325-30", "20221235", 12.0, 10.9);
cout << funcionario1.getCpf() << endl;
cout << funcionario1.getCpf() << endl;
cout << funcionario1.getCpf() << endl;

// 6-Cadastrar o produto Mesa (estoque mínimo: 20 unidades), que, para sua produção, necessita das matérias-primas e quantidades abaixo, 
//que também devem ser cadastradas.
// ▪ Madeira: 450g (estoque mínimo: 1 Kg) ▪ Plástico: 150g (estoque mínimo: 1 Kg) ▪ Alumínio: 100g (estoque mínimo: 1 Kg) 
//▪ Parafusos: 8 unidades (estoque mínimo: 20 unidades)
//(para compilar) c++ main.cpp Venda.cpp Produto.cpp Lote.cpp Data.cpp Estoque.cpp Formato.cpp Funcionarios.cpp Pessoa.cpp MateriaPrima.cpp -o main
//(para rodar) ./main

MateriaPrima *madeira = new MateriaPrima;
madeira->SetNome("Madeira");
madeira->SetQuantidade(0.450);
madeira->SetEstoqueMin(1);
cout<<madeira->getNome()<<endl;
cout<<madeira->getQuantidade()<<endl;
cout<<madeira->getUnidMed()<<endl;
cout<<madeira->getEstoqueMin()<<endl;

MateriaPrima plastico("Plastico",0.150, 1,"kg");
cout <<plastico.getNome()<<endl;
cout <<plastico.getQuantidade()<<endl;
cout <<plastico.getEstoqueMin()<<endl;
cout <<plastico.getUnidMed()<<endl;

MateriaPrima alumínio("Alumínio",0.100, 1,"kg");
MateriaPrima *parafuso = new MateriaPrima;
parafuso->SetNome("Parafuso");
parafuso->SetQuantidade(8);
parafuso->SetUnidMed("unidades");
parafuso->SetEstoqueMin(20);


Produto *mesa = new Produto;
mesa->SetNome("Mesa");
mesa->SetEstoque_min(20);
mesa->SetMateriaPrima(*madeira);
mesa->SetMateriaPrima(plastico);
mesa->SetMateriaPrima(alumínio);
mesa->SetMateriaPrima(*parafuso);

      
     //Declaring iterator to a vector
    // vector<MateriaPrima>::iterator ptr;
      
    // // Displaying vector elements using begin() and end()
    // cout << "The vector elements are : ";
    // for (ptr = mesa->getMateriasPrimas().begin(); ptr < mesa->getMateriasPrimas().end(); ptr++)
    //     cout << ptr->getNome() << " ";
      
 




};
