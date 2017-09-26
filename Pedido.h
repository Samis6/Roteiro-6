#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>

using namespace std;

class Pedido{

private:
	int numero, quantidade;
	string descricao;
	double preco;

public:
	
	void setNumero(int);
	int getNumero();
	
	void setDescricao(string);
	string getDescricao();
	
	void setQuantidade(int);
	int getQuantidade();
	
	void setPreco(double);
	double getPreco();

	Pedido(int, string , double);
	Pedido();
};

#endif