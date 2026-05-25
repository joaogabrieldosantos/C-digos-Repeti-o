8) Faça um programa que peça várias notas (0 a 10) e pare de pedir quando o usuário informar um valor negativo.

____________________________________________________________________________________________________________________

#include <iostream>
using namespace std;

int main(){
int notas;
int i;


do{
	cout << "Me informe o valor de uma nota: ";
	cin >> notas;
	
	if (notas > 10){
		cout << "Valor invalido!! " << endl;
		return 0;
	}
	
	
}while(notas >= 0);

 return 0;
}
