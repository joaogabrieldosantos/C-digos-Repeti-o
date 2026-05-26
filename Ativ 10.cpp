Faça	um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações. Dica (#include<string>).

___________________________________________________________________________________________________________________________

#include <iostream>
#include <string>
using namespace std;

int main(){
	string Login;
	string senha;
	
	cout << "Me de o seu nome: ";
	cin >> Login;
	
	cout << "Me de sua senha agora: ";
		cin >> senha;
	
	do{
		
		if (Login == senha){
		
			cout << "Erro!!! " << "Tente novamente" << endl;
			
			cout << "O login deve ser diferente da senha, me de o seu nome: ";
			cin >> Login;
			
			cout << "Me de o sua senha: ";
	        cin >> senha;
	    
	    }else{
	    	
		}
		
	
		}while (Login == senha);
		
		cout << "Seu nome eh: " << Login << endl;
		cout << "Sua senha eh: " << senha << endl;
		
		return 0;
		
	}
