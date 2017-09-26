#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;


int main(){
	
	int opcao;

	cout << "(1) Listar pedidos" << endl;
	cout << "(2) Zerar pedido" << endl;
	cout << "(3) Total da Mesa" << endl;
	cout << "(4) Total arrecadado" << endl;

	cout <<"Digite uma opção: ";
	cin >> opcao;
	
	RestauranteCaseiro restaurante;

	restaurante.adicionarAoPedido(Pedido(1, "Refrigerante", 15.00), 1);
						
	restaurante.adicionarAoPedido(Pedido(2, "Lasanha", 19.00), 2);
						
	restaurante.adicionarAoPedido(Pedido(3, "Pizza", 20.00), 3);
						
	restaurante.adicionarAoPedido(Pedido(4, "Macarronada", 12.00),4);
	
	restaurante.adicionarAoPedido(Pedido(5, "Panqueca", 7.00), 5);
						

	if (opcao == 1){
		cout << "" << restaurante.getMesas(1).getPedido();
	}

	if (opcao == 2){

	restaurante.getMesas(1).zeraPedidos();
	
	restaurante.getMesas(2).zeraPedidos();
	
	restaurante.getMesas(3).zeraPedidos();
	
	restaurante.getMesas(4).zeraPedidos();
	
	restaurante.getMesas(5).zeraPedidos();

	}  
	

	if (opcao == 3){
		cout << "Total desta mesa: R$ " << restaurante.getMesas(1).calculaTotal() << "\n" << endl;
	}	
	
	if (opcao == 4){
		cout << "Total arrecadado no dia: R$ " << restaurante.calculaTotalRestaurante() << "\n" << endl;
	}

	return 0;
}