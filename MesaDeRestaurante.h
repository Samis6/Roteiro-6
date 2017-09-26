#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#define TAMANHO 20

using namespace std;


class MesaDeRestaurante{

private:
	Pedido pedidos[TAMANHO]; 
	int numPedidos;
	double valorFinal;

public:
	MesaDeRestaurante();
	Pedido getPedido(); 
	int getNumPedidos();
	void adicionaAoPedido(Pedido); 
	void zeraPedidos(); 
	double calculaTotal(); 
};

#endif