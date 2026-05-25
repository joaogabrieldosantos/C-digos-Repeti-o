1) Faça um programa que imprima na tela os números de 1 a 20, um abaixo do	outro. Depois modifique o programa para que ele mostre os números	um ao lado do outro.

___________________________________________________________________________________________
R:
#include <iostream>
using namespace std;

void mussarela(int n){
	int i = 1;

	
	while(i <= n && n <= 20){
		cout << i  << endl;
		i++;
		
	}
	
}

int main(){
	int x = 20;

    mussarela(x);

	return 0;
	
}
________________________________________________________________________________________
R2 (com os numeros de lado):
#include< iostream>
using namespace std;

void mussarela(int n){
	int i = 1;

	
	while(i <= n && n <= 20){
		cout << i  << " : ";
		i++;
		
	}
	
}

int main(){
	int x = 20;

    mussarela(x);

	return 0;
	
}
