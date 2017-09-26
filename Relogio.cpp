#include <iostream>
#include "Relogio.h"

using namespace std;

Relogio::Relogio(int h, int m, int s){
	setHorario(h, m, s);
}

void Relogio::setHorario(int h, int m, int  s){
	if(h < 0 || h > 24){
		cout << "Horario invalido" << endl;
	} else {
		hora = h;
	}
	if(m < 0 || m > 59){
		cout << "Horario invalido" << endl;
	} else {
		minuto = m;
	}
	if(s < 0 || s > 59){
		cout << "Horario invalido" << endl;
	} else {
		segundo = s;
	}
}

int Relogio::getHora(){
	return hora;
}
int Relogio::getMinuto(){
	return minuto;
}
int Relogio::getSegundo(){
	return segundo;
}

void Relogio::avancarHorario(){
	if(segundo >= 0 && segundo < 59){
		segundo += 1;
	}else if(segundo == 59){
		segundo = 0;
		minuto += 1;
		}
		if(segundo == 59 && minuto >= 0 && minuto < 59){
			minuto += 1;
		}else if(minuto == 59 || minuto == 60){
			minuto = 0;
			hora += 1;
			}
			if(minuto == 59 && hora >= 0 && hora <= 23){
				hora += 1;
			}else if(hora == 24 || hora == 23 && minuto == 59 && segundo == 59){
				hora = 0;
				minuto = 0;
				segundo = 0;
			}
				
}
