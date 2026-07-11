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
