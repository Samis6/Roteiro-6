#include <iostream>
#include "televisao.h"

using namespace std;

int main(){
	int canal=0, volume=0;
	int op, opC;
	
	Televisao TV(canal, volume);

	while(true){
	cout << "digite a opcao escolhida\n(1) Adicione canal e volume\n(2) Exibir canal e volume\n(3) Modifica Volume\n(4) Modifica Canal\n(5) Sair" << endl;
	cin >> op;
	
	if(op == 1){
		cout << "Qual canal?" << endl; 
		cin >> canal;
		TV.setCanal(canal);
		cout << "Qual volume?" << endl;
		cin >> volume;
		TV.setVolume(volume);	
	}
	

	if(op == 2){
		cout << "O canal eh " << TV.getCanal() << endl;
		cout << "O volume eh " << TV.getVolume() << endl;
	}
	
	if(op == 3){
		cout << "Digite (1) para aumentar o volume ou (0) para diminuir." << endl;
		TV.modificaVolume();
	}

	if(op == 4){
		cout << "Digite \n(1) para proximo canal\n(2) para canal anterior\n(3) trocar de canal" << endl; 
		TV.modificaCanal();
	}
	
	if(op == 5){
		cout << "Obrigado por usar nosso sistema." << endl;
		return 1;
	}

}

	return 0;
}
