5) Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

  _______________________________________________________________________________________

#include < iostream>
using namespace std;

int main(){

for (int i = 1; i <= 50; i++){
	if (i % 2 != 0){
		cout << "Os numeros que sao impares sao: " << i << endl;
	}

}
return 0;
}
