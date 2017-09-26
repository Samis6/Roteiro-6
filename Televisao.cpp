#include <iostream>
#include "televisao.h"

using namespace std;

Televisao::Televisao(int c, int v){
	setCanal(c);
	setVolume(v);
}

void Televisao::setVolume(int v){
	if(v < 0){
		cout << "Volume minimo" << endl;
	}else if(v > 100){
			cout << "Volume no maximo" << endl;
		}else{
			volume = v;
		}
}

void Televisao::setCanal(int c){
	if(c < 0){
		cout << "Canal Inexistente" << endl;
	}else if(c > 100){
			cout << "Canal Inexistente" << endl;	
	}else{
			canal = c;
		}
}

int Televisao::getVolume(){
	return volume;
}

int Televisao::getCanal(){
	return canal;
}

void Televisao::modificaVolume(){
    int o;
	cin >> o;
	if(o == 1){
		volume++;
	}else if(o == 0){
		volume--;
	}else{
		cout << "valor invalido, digite novamente" << endl;
		modificaVolume();
	}
	cout << "volume atual eh: " << volume << endl;
}

void Televisao::modificaCanal(){
	int o;
	int ca;
	cin >> o;
	if(o == 1){
		canal++;
	}else if(o == 2){
		canal--;
		}else if(o == 3){
			cout << "Qual canal desejado? " << endl;
			cin >> ca;
			setCanal(ca);
	}
	else{
		cout << "Invalido. Digite novamente" << endl;
		modificaCanal();		
	} 
	cout << canal << endl;

}
