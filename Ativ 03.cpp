3) Faça um programa que leia N números e informe a soma e a média dos números.

___________________________________________________________________________________________
R:
#include< iostream>
using namespace std;

int main(){
	int n, nume;
	float media;
	float soma = 0;
	int multi = 1;
	
	cout << "Me diga quantos numeros ira digitar: ";
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> nume;
		
		soma = soma + nume;                                                                             //aq a soma vai servir como um reservatorio, ela vai armazenar o primeiro valor, ex soma = soma + 1, soma = 0 + 1, soma = 1!!
		
		media = (soma / n);
		
		multi = multi * nume;
		
		
	}
	
	cout << "Sua soma eh de: " << soma << endl;
	
	cout << "Sua media eh de: " << media << endl;
	
	cout << "Sua multiplicacao eh: " << multi << endl;
	
	return 0;
	
}
