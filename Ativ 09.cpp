9) Faça	um programa que peça uma única nota, entre zero e dez. Caso o valor informado seja inválido, seu programa deve emitir uma mensagem de erro e solicitar novamente a nota até que o usuário informe uma 
nota válida, entre zero e dez.
_____________________________________________________________________________________________________________________
	
#include <iostream>
using namespace std;

int main(){
	int nota;
	int i = 0;
		
	cout << "Me diga sua nota(ela so vai de 0 a 10): ";
	cin >> nota;
	
	do{
		if (nota > 10){
		
		cout << "ERRO!!" << endl;
		cout << "Me de uma nota valida: ";
		cin >> nota;
		
}else{
	

}
    i++;

	}while(i > 0);
	
	cout << "Sua nota foi analizada, sua nota eh: " << nota << endl;
	
	return 0;
}
