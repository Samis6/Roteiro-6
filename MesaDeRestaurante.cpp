#include "MesaDeRestaurante.h"
#include "Pedido.h"

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(){
	numPedidos = 0;
	valorFinal = 0.0;
}


void MesaDeRestaurante::adicionaAoPedido(Pedido ped){
	pedidos[numPedidos] = ped;
	valorFinal += ped.getPreco();
	numPedidos++;
}

void MesaDeRestaurante::zeraPedidos(){

	for(int i = 0; i < numPedidos; i++){
		pedidos[i].setQuantidade(0);
	}

	valorFinal = 0.0;

}

double MesaDeRestaurante::calculaTotal(){

	return valorFinal;
}
Pedido MesaDeRestaurante::getPedido() {
	return pedidos[numPedidos]; 
}
int MesaDeRestaurante::getNumPedidos(){
	return numPedidos; 
}