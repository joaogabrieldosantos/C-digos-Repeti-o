6) Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.
________________________________________________________________________________________________________________________________

#include < iostream>
using namespace std;

int main(){
	int num = 0;
	int n1 = 0;
	int n2 = 0;
	int menor;
	
	cout << "Me informe o primeiro parametro: ";
	cin >> n1;
	cout << "Me informe o segundo parametro: ";
	cin >> n2;
	
	if (n1 > n2){
		num = n1;
		
	}else{
		num = n2;
	}
	
	if(n1 < n2){
		menor = n1;
		
	}else{
		menor = n2;
		
	}
	
	
	while(menor < num - 1){
		menor++;
		cout << menor  << " ";
		
	
	}
return 0;	
}
