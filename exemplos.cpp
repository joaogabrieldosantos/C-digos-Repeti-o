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
//____________________________________________________________________________________________________________________________
//Crie um programa que peça ao usuário um número N e faça a impressão apenas dos números pares de 0 até N,
//imprimindo cada número.
//--------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void par (int num){
	int i = 0;

	cout << "Ate que numero sera a verificacao? Ate o numero ";
		cin >> num;
		
	while(i <= num){
	
		cout << i << endl;
		
		i += 2;
		
	}
}

int main(){
	int n;
	
	par(n);
}
//--------------------------------------------------------------------------------------------------------------------
//se seguir a dica dada o exercicio sera feito desta forma, mas o de cima foi o primeiro jeito que pensei.

#include <iostream>
using namespace std;

void par(int num){

    cout << "Ate que numero sera a verificacao? ";
    cin >> num;

    int i = num;

    while(i >= 0){

        if(i % 2 == 0){
            cout << i << endl;
        }

        i--;
    }
}

int main(){

    int n;

    par(n);

    return 0;
}
//____________________________________________________________________________________________________________________________
//Faça uma função que receba um número e imprima a tabuada desse número de 1 até 10.
//--------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void tab (int num){
	int i = 1;
	int mult;
	
	cout << "Me de o numero da tabuada que sera utilizado: ";
	cin >> num;
	
	while (i <= 10){
		
		mult = num * i;
		cout << num << " X " << i << " = " << mult << endl;
		
		i++;
		
	}
	
}

int main(){
	int n;
	
	tab(n);
	
	return 0;
}
//____________________________________________________________________________________________________________________________
