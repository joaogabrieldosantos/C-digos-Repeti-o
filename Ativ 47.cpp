47) Em uma competição de ginástica, cada atleta recebe votos de sete jurados. A melhor e a pior nota são eliminadas. A sua nota fica sendo a média dos votos restantes. 
  Você deve fazer um programa que	receba o nome do ginasta e as notas dos sete jurados alcançadas	pelo atleta em sua apresentação e depois informe a sua média,	conforme a descrição informada (retirar o melhor e o pior salto e depois calcular a média com as notas restantes).
  As notas não são informados ordenadas. Um exemplo de saída do programa deve ser conforme o exemplo abaixo:
    
    ```
    						    -----------------------------
    										 **Súmula digital**
    								-----------------------------
    
    Atleta: Aparecido Parente
    Nota: 9.9
    Nota: 7.5
    Nota: 9.5
    Nota: 8.5
    Nota: 9.0
    Nota: 8.5
    Nota: 9.7
    ------------------------------
    Resultado final:
    Atleta: Aparecido Parente
    Melhor nota: 9.9
    Pior nota: 7.5
    Média: 9,04
    ```
_______________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
 
#include <iostream>
using namespace std;

int main(){
	string nome;
	float nota = 0;
	float med = 0;
	float maior = 0;
	// menor tem que ser um numero absurdo ja que se ele for zero, ele sempre sera ZERO!!
	float menor = 9999999999;
	float soma = 0;
	
	cout << "Nome: ";
	getline (cin,nome);
	
	for (int i = 1; i <= 7; i++){
		
		cout << "Nota " << i << ": ";
		
		cin >> nota;
		
		if (nota > maior){
		maior = nota;
			
		} if (nota < menor){
		menor = nota;
		
		}
		
		soma = soma + nota;
		
		med = soma/7;
	}
	
	cout << "RESULTADO FINAL!!" << endl;
		
		cout << "Sua Melhor nota foi: " << maior << endl;
		
		cout << "Sua pior nota foi: " << menor << endl;
		
		cout << "Sua media foi: " << med << endl;
	
	return 0;
}
