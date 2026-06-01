46) Em uma competição de salto em distância cada atleta tem direito a cinco saltos. No final da série de saltos de cada atleta, o melhor	e o pior resultados são eliminados. O seu resultado fica sendo a média dos três valores restantes. 
Você deve fazer um programa que receba o **nome do atleta** e as **cinco distâncias** alcançadas pelo atleta em seus saltos e depois informe a **média** dos saltos conforme a descrição informada (retirar o melhor e o pior salto e depois calcular a média).
Os saltos são informados na ordem da execução, portanto não são ordenados.
O programa deve ser encerrado quando não for informado o nome do atleta. A saída do programa deve ser conforme o exemplo	abaixo:
    
    ```
    						    -----------------------------
    										 **Súmula digital**
    								-----------------------------
    
    Atleta: Rodrigo Canguru
    Primeiro Salto: 6.5 m
    Segundo Salto: 6.1 m
    Terceiro Salto: 6.2 m
    Quarto Salto: 5.4 m
    Quinto Salto: 5.3 m
    --------------------------------
    Melhor salto: 6.5 m
    Pior salto: 5.3 m
    Média dos demais saltos: 5.9 m
    --------------------------------
    *Resultado final 
    -> Rodigo Canguru 5.9 m
    ```
____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________

#include <iostream>
using namespace std;

int main(){
	string name;
	float nota = 0;
	float maior = 0;
	float menor = 9999999999;
	float soma = 0;
	float med = 0;
	
	cout << "Seu nome eh: " << name << endl;
	getline (cin,name);

	for (int i = 1; i <= 5; i++){
		
		cout << "Salto " << i << ": ";
		
		cin >> nota;
		
		soma = soma + nota;
		
		if (nota > maior){
			maior = nota;
			
		}if(nota < menor){
			menor = nota;
		}
		
	}
	
	cout << "____________________________" << endl;
	
	cout << "Seu melhor salto foi: " << maior << "m" << endl;
	
	cout << "Seu pior salto foi: " << menor << "m" << endl;
	
	soma = soma - menor - maior;
	
	med = soma / 3;
	
	cout << "Sua media foi de: " << med << "m" << endl;
	
	cout << "____________________________" << endl;
	
	cout << "RESULTADO FINAL!! " << endl;
	
	cout << "--> " << name << " " << med << " m" << endl;
	
	return 0;
}
