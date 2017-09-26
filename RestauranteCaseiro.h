#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#define TAMANHO 20
#include "MesaDeRestaurante.h"


using namespace std;
//representa as mesas do restaurante

class RestauranteCaseiro{

	private:
		MesaDeRestaurante mesas[TAMANHO];

    public:
    	MesaDeRestaurante getMesas(int i){
    	 return mesas[i];
    	}
		
		RestauranteCaseiro();
    	void adicionarAoPedido(Pedido, int);
        double calculaTotalRestaurante();
};

#endif