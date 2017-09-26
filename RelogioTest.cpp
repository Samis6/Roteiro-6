#include <iostream>
#include "Relogio.h"

using namespace std;

int main(){
	int h, m, s;
	int op;
	
	while(1){
	cout << "Heilou, este programa é pra ser um relogio.\n****OPCOES****\n(0) Sair.\n(1) Adicionar hora\n(2) avancar o horario\n" << endl;
	cin >> op;

	if (op == 0){
		cout << "Compre um relogio. Indico CASIO." << endl;
		return 1;
	}		

	if(op == 1){
	cout << "Digite uma hora" << endl;
	cin >> h;
	cout << "Digite um minuto" << endl;
	cin >> m;
	cout << "Digite um segundo" << endl;
	cin >> s;
	}
	Relogio r(h, m, s);
	
	if (op == 2){
	r.avancarHorario();
	
	cout << "O horario eh:" << r.getHora() << ":" << r.getMinuto() << ":" << r.getSegundo() << endl; 
	}

	
	}

	return 0;
}
