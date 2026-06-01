45. Desenvolver um programa para verificar a nota do aluno em uma prova com 10 questões, o programa deve perguntar ao aluno a resposta de cada	questão e ao final comparar com o gabarito da prova e assim calcular o total de acertos e a nota (atribuir 1 ponto por resposta	certa). Após cada aluno utilizar o sistema deve ser feita uma pergunta se outro aluno vai utilizar o sistema. Após todos os alunos terem respondido informar:
    1. Maior e Menor Acerto;
    2. Total de Alunos que utilizaram o sistema;
    3. A Média das Notas da Turma.
        
        ```
        								-----------------------------
        										 **Gabarito da prova**
        								-----------------------------
        01 - A
        02 - B
        03 - C
        04 - D
        05 - E
        06 - E
        07 - D
        08 - C
        09 - B
        10 - A
        ```
        
Após concluir isto você poderia incrementar o programa permitindo que o professor digite o gabarito da prova antes dos alunos usarem o programa.

___________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________


#include <iostream>
using namespace std;

int main(){
	string name;
	int nota;
	char let;
	char gab[10] = {'A', 'B', 'C', 'D', 'E', 'E', 'D', 'C', 'B', 'A'};
	int continuar = 0;
	float soma = 0;
	float media = 0;
	int maior = 0;
	int menor = 9999999999999999999;
	int notes[300];
	
	while(continuar == 0){
		

	
	cout << "Seu nome eh: ";
	getline(cin,name);
	
	cout << "Aviso as respostas so podem ser (A, B, C, D ou E)" << endl;
	
	
	for(int i = 1; i <= 10; i++){
		
		cout << "Questao " << i << ":";
		cin >> let;
		
		if (let != 'A' && let != 'a' && let != 'B' && let != 'b' && let != 'C' && let != 'c' && let != 'D' && let != 'd' && let != 'E' && let != 'e'){
			cout << "Nao existe essa resposta, tente novamente!! " << endl;
			
		}else{
		 switch(i){
		 	case(1):
		 	if(gab[0] = let){
		 		
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 1 letra A" << endl;
		 	nota = nota + 1;
		 	
		 }else{
		 	cout << "Voce ERROU!" << endl;
		 	cout << "A 1 letra A" << endl;
		 	
		 }
		 
		 break;
		 
		 case(2):
		 	if (gab[1] = let){
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 2 letra B" << endl;
		 		nota = nota + 1;
		 		
			 }else{
			 	cout << "Voce ERROU!" << endl;
			 	cout << "A 2 letra B" << endl;
			 	
			 }
			 
			 break;
			 
			 case(3):
		 	if(gab[2] = let){
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 3 letra C" << endl;
		 	nota = nota + 1;
		 	
		 }else{
		 	cout << "Voce ERROU!" << endl;
		 	cout << "A 3 letra C" << endl;
		 	
		 }
		 
		 break;
		 
		 case(4):
		 	if (gab[3] = let){
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 4 letra D" << endl;
		 		nota = nota + 1;
		 		
			 }else{
			 	cout << "Voce ERROU!" << endl;
			 	cout << "A 4 letra D" << endl;
			 	
			 }
			 
			 break;
			 
			 case(5):
		 	if(gab[4] = let){
		 		cout << "A 5 letra E" << endl;
		 		cout << "Voce ACERTOU!!" << endl;
		 	nota = nota + 1;
		 	
		 }else{
		 	cout << "Voce ERROU!" << endl;
		 	cout << "A 5 letra E" << endl;
		 	
		 }
		 
		 break;
		 
		 case(6):
		 	if (gab[5] = let){
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 6 letra E" << endl;
		 		nota = nota + 1;
		 		
			 }else{
			 	cout << "Voce ERROU!" << endl;
			 	cout << "A 6 letra E" << endl;
			 	
			 }
			 
			 break;
			 
			 case(7):
		 	if(gab[6] = let){
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 7 letra D" << endl;
		 	nota = nota + 1;
		 	
		 }else{
		 	cout << "A 7 letra D" << endl;
		 	cout << "Voce ERROU!" << endl;
		 	
		 }
		 
		 break;
		 
		 case(8):
		 	if (gab[7] = let){
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 8 letra C" << endl;
		 		nota = nota + 1;
		 		
			 }else{
			 	cout << "A 8 letra C" << endl;
			 	cout << "Voce ERROU!" << endl;
			 	
			 }
			 
			 break;
			 
			 case(9):
		 	if(gab[8] = let){
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 9 letra B" << endl;
		 	nota = nota + 1;
		 	
		 }else{
		 	cout << "Voce ERROU!" << endl;
			cout << "A 9 letra B" << endl;
		 }
		 
		 break;
		 
		 case(10):
		 	if (gab[9] = let){
		 		cout << "Voce ACERTOU!!" << endl;
		 		cout << "A 10 letra A" << endl;
		 		nota = nota + 1;
		 		
			 }else{
			 	cout << "Voce ERROU!" << endl;
			 	cout << "A 10 letra A" << endl;
			 	
			 }
			 
			 break;
		 
		 default:
		    cout << "Agr tem 11 questoes ne fdp?? " << endl;
		    
		 }
		 
		}
		
		
		  
	    
	    
	}
	cout << "Deseja continuar?(0 para sim e 1 para nao) ";
	cin >> continuar;
	name = notes;
}
        for(int 0 = 1; o <= 10; o++){
        	cout << "A nota da turma foi:" << endl;
        	cout << "nota " << o << ": ";
        	cout << notes;
		}


}
