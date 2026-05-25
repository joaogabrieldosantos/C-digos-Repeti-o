2) Faça um programa que leia N números e informe o maior número.
___________________________________________________________________________________________
R:
#include <iostream>
using namespace std;

int main(){
	int n, nume, maior;
	
	cout << "Quantos numeros ira digitar? ";
	cin >> n;
	
	cin >> maior;
	
	for(int i = 1; i < n; i++){
		cin >> nume;
		
		if (nume > maior){
			maior = nume;
			
		}
	}
	
	cout << "O maior numero eh: " << maior << endl;
	return 0;
}

OU

#include < iostream>
using namespace std;

int main(){
	int n = 0; 
	int nume = 0; 
	int maior = 0;
	
	cout << "Quantos numeros ira digitar? ";
	cin >> n;
	
		
	maior = nume;
	for(int i = 1; i <= n; i++){
		cin >> nume;
		
		if (nume > maior){
			maior = nume;
			
		}
	}
	
	cout << "O maior numero eh: " << maior << endl;
	return 0;
}
