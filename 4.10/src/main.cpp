#include <iostream>
#include "Orcamento.hpp"
#include <map>
#include "Produto.hpp"
#include "Lote.hpp"
#include "Estoque.hpp"
#include "Venda.hpp"
#include "Data.hpp"
#include "Funcionarios.hpp"
#include "Pessoa.hpp"
#include "MateriaPrima.hpp"
#include "Usuario.hpp"
#include "Cargo.hpp"
#include "Cliente.hpp"


using namespace std;


int main() {
// 1- Instanciar um objeto da classe Empresa. 
// 2-Instanciar um objeto de um usuário logado que deverá ter permissão de acesso à todas as funcionalidades, exceto ao método que realiza a exclusão de um funcionário.
// 3-Comprovar o funcionamento do singleton do usuário logado. 
// ok 4-Cadastrar três funcionários. 
// ok 5-Cadastrar dois clientes, sendo um PF e outro PJ. 
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


    Lote Lote21(d2, "4141", Ketchup.getLote_minProduto(), 300, Ketchup);
    Lote Lote22(d2, "4242", Ketchup.getLote_minProduto(), 300, Ketchup);
    Lote Lote23(d3, "3043", Ketchup.getLote_minProduto(), 300, Ketchup);
         vector<Lote> LotesAtuais2;
         LotesAtuais2.push_back(Lote21);
         LotesAtuais2.push_back(Lote22);
         LotesAtuais2.push_back(Lote23);

     Lote Lote31(d3, "5050", FitaCrepe.getLote_minProduto(), 3000, FitaCrepe);
         vector<Lote> LotesAtuais3;
        LotesAtuais3.push_back(Lote31);

    //Criando cada estoque
     Estoque Estoque2(LotesAtuais2);
     Estoque Estoque3(LotesAtuais3);


    //◦Instanciar um objeto da classe Empresa.
//Empresa empresa("amazon", "12345678910");

//◦Cadastrar três funcionários.

Funcionarios funcionario1("João", "074.581.325-10", "20221233", 12.5, 10.1);
Funcionarios funcionario2("Maria", "074.581.325-20", "20221234", 12.1, 10.2);
Funcionarios funcionario3("José", "074.581.325-30", "20221235", 12.0, 10.9);
//cout << funcionario1.getCpf() << endl;
//cout << funcionario2.getCpf() << endl;
//cout << funcionario3.getCpf() << endl;

// 6-Cadastrar o produto Mesa (estoque mínimo: 20 unidades), que, para sua produção, necessita das matérias-primas e quantidades abaixo, 
//que também devem ser cadastradas.
// ▪ Madeira: 450g (estoque mínimo: 1 Kg) ▪ Plástico: 150g (estoque mínimo: 1 Kg) ▪ Alumínio: 100g (estoque mínimo: 1 Kg) 
//▪ Parafusos: 8 unidades (estoque mínimo: 20 unidades)
//(para compilar) c++ main.cpp Venda.cpp Produto.cpp Lote.cpp Data.cpp Estoque.cpp Formato.cpp Funcionarios.cpp Pessoa.cpp MateriaPrima.cpp -o main
//(para rodar) ./main

MateriaPrima *madeira = new MateriaPrima;
madeira->SetNomeMateriaPrima("Madeira");
madeira->SetQuantidadeMateriaPrima(0.450);
madeira->SetEstoqueMinMateriaPrima(1);
cout<<madeira->getNomeMateriaPrima()<<endl;
cout<<madeira->getQuantidadeMateriaPrima()<<endl;
cout<<madeira->getUnidMed()<<endl;
cout<<madeira->getEstoqueMinMateriaPrima()<<endl;

MateriaPrima plastico("Plastico",0.150, 1,"kg");
cout <<plastico.getNomeMateriaPrima()<<endl;
cout <<plastico.getQuantidadeMateriaPrima()<<endl;
cout <<plastico.getEstoqueMinMateriaPrima()<<endl;
cout <<plastico.getUnidMed()<<endl;

MateriaPrima alumínio("Alumínio",0.100, 1,"kg");
MateriaPrima *parafuso = new MateriaPrima;
parafuso->SetNomeMateriaPrima("Parafuso");
parafuso->SetQuantidadeMateriaPrima(8);
parafuso->SetUnidMed("unidades");
parafuso->SetEstoqueMinMateriaPrima(20);


Produto *mesa = new Produto;
mesa->SetNomeProduto("Mesa");
mesa->SetEstoque_minProduto(20);
mesa->SetMateriaPrimaProduto(*madeira);
mesa->SetMateriaPrimaProduto(plastico);
mesa->SetMateriaPrimaProduto(alumínio);
mesa->SetMateriaPrimaProduto(*parafuso);

//Criando estoque e lotes de Mesa
Estoque *estoqueMesa = new Estoque;
Data d4(2022, 5, 3, 4, 6, 0);
Lote Mesa1(d4, "MESA83732", 20, 20, mesa);
estoqueMesa->InsertLote(Mesa1);

      
     //Declaring iterator to a vector
    // vector<MateriaPrima>::iterator ptr;
      
    // // Displaying vector elements using begin() and end()
    // cout << "The vector elements are : ";
    // for (ptr = mesa->getMateriasPrimas().begin(); ptr < mesa->getMateriasPrimas().end(); ptr++)
    //     cout << ptr->getNome() << " ";
    
    //Cadastrar dois clientes, sendo um PF e outro PJ
    Cliente EltonMarques("Elton Marques", "85005570012", 1); //PF
    Cliente SpaceY("SpaceY ltda", "29173103000135", 0); //PJ

    // 9-O cliente PJ deve solicitar um orçamento para aquisição de 10 mesas. Em função da previsão de falta de matéria-prima, 
    //após a geração desse orçamento, o preço da mesa deve sofrer um aumento de 5%. Em seguida o cliente decide adquirir as 10 mesas, mesmo após o aumento.
    Data d4(2022, 11, 5, 10, 5, 0);
    map<Produto*, int> Pedido1;
    Pedido1[mesa] = 10;
    Orcamento MesasSpaceY(SpaceY, Pedido1, d4);
    mesa->SetValorProduto(mesa->getValorProduto()*1.05); //aumento de 5%
    MesasSpaceY.EfetivarVenda(d4, "Cartao a vista");

    // Testando funcionalidade singleton, única instancia na classe usuario, após a criação na classe Funcionarios(teste),
    // o endereço de memoria é o mesmo, garantindo assim a funcionalidade adequada
    cout <<Usuario::instanciaUsuario() << endl;
    Funcionarios classe;
    Cargo *cargo = new Cargo;
    cargo->SetFuncionarios(funcionario1);
    // // 3-Comprovar o funcionamento do singleton do usuário logado.
  
    Usuario::instanciaUsuario()->usuarioLogado("074.581.325-10", cargo);
    Usuario::instanciaUsuario()->SetPermissao("AdicionaMP",0);
    Usuario::instanciaUsuario()->GetPermissao();
    cargo->SetNomeCargo("rh");
    cout << cargo->getNomeCargo() << endl;

};
