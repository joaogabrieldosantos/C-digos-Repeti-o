48) Faça	um programa que peça um numero inteiro positivo e em seguida mostre este numero invertido. Exemplo: 1234=> 4321.
__________________________________________________________________________________________________________________________

#include <iostream>
using namespace std;

int main(){
	int chora, aizen = 0;
	
	cout << "Boa tarde, caro usuario, gostaria de ver uma magica? " << endl;
	cout << "Se sim, me de um numero inteiro e positivo: ";	
	cin >> chora;
	
    while(chora > 0){
    	aizen = aizen * 10 + chora % 10;
    	chora = chora / 10;
    	
	}
	if (chora < 0){
		cout << "Esse numero nao eh positivo maluco!!!";
		return 0;
		
	}else{
	
	cout << "Recebi seu numero, agora vou inverte-lo..." << endl;
	cout << "Tadaaaa..." << endl;
	cout << "Seu numero invertido ficou: " << aizen << endl;
}

	return 0;
}
