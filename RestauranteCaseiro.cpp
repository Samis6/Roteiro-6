#include "RestauranteCaseiro.h"
#include "Pedido.h"
#include "MesaDeRestaurante.h"

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(){
    
}

void RestauranteCaseiro::adicionarAoPedido(Pedido ped, int numero){  
    mesas[numero].adicionaAoPedido(ped); 
} 

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0.0;

	for(int i = 0; i < TAMANHO; i++){
		total += mesas[i].calculaTotal();
	}

	return total;
}