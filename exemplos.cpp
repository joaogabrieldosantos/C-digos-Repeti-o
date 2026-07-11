//Faca uma funcao que receba 5 notas e someas e faca media.
//Onde N sera informado pelo usuario na funcao M. resolva em c++ usando apenas while.

//--------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

float medi(){
	int num;
    float soma; 
	float nota;
	float media;
	int i = 1;
	
	cout << "Me de a quantidade de notas: ";
	cin >> num;
	
	while (i <= num){
		cout << "Me de os numeros que serao utilizados no somatorio. Nota " << num << " : ";
	cin >> nota;
		
		soma += nota;
		
		i += 1;
			
	}
	
	media = soma / num;
	
	cout << "Soma das notas: " << soma << endl;
	cout << "Media das notas: " << media << endl;
	
}

int main(){

    medi();
    
	return 0;
}
//____________________________________________________________________________________________________________________________

//Crie um programa que peça ao usuário um número N e faça uma contagem regressiva de N até 0, imprimindo cada número.
//--------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void regre(int num){
	
	cout << "quais numeros serao utilizados: ";
		cin >> num;
		
	while(num >= 1){
		
		cout << num << endl;
		num = num - 1;
		
	}
	
}


int main(){
	int n;
	
	regre(n);
	cout << "ZERO!! Iniciar/explodir/sla oq!!" << endl;
	
	return 0;
}
