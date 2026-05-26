11. Faça	um programa que leia e valide as seguintes informações:
    1. Idade: entre 0 e 150;
    2. Salário: maior que zero;
    3. Estado Civil: 's', 'c', 'v', 'd';
    
OBS: Validar significa que seu programa deve garantir que os valores sejam válidos. Ou seja, se o usuário não informar corretamente, seu programa deve pedir que ele informe novamente. Isso é validação! É uma boa prática de programação.
____________________________________________________________________________________________________________________________

  #include <iostream>
using namespace std;

int main(){
	int idade = 0;
	int salar = 0;
	char est;
	
	cout << "Me diga quantos anos voce tem: ";
	cin >> idade;
	
	cout << "Me fale seu salario atual: ";
	cin >> salar;
	
	cout << "Me diga seu Estado Civil (s, c, v, d): ";
	cin >> est;
	
	do{
		
		if (idade > 150 || idade < 0){
			cout << "Erro, sua idade nao existe!! " << endl;
			cout << "Me diga quantos anos voce tem: ";
	        cin >> idade; 
	        
		}else{
			
		}
				
		if (salar <= 0){
			cout << "Erro, seu salario esta errado!! " << endl;
			cout << "Me fale seu salario atual: ";
	        cin >> salar;
	        
		}else{
			
		}
		
		if (est != 's' && est != 'c' && est != 'v' && est != 'd'){
			cout << "Erro, seu Estado Civil nao esta na sistema!! " << endl;
			cout << "Me diga seu Estado Civil (s, c, v, d): ";
	        cin >> est;
	        
		}else{
			
		}
		

		
	}while (est != 's' && est != 'c' && est != 'v' && est != 'd');
	
	cout << "Sua idade atual eh: " << idade << endl;
	cout << "Seu salario atual eh: " << salar << endl;
	cout << "Seu Estado Civil eh: " << est << endl;
	
	return 0;
}
