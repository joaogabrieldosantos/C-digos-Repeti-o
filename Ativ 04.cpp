4)Faça um programa que leia N números e informe a soma dos 3 maiores.

__________________________________________________________________________________________________________________________

#include< iostream>
using namespace std;

int main(){
	int n = 0;
	int num = 0;
	int soma = 0; 
	int M1 = 0;
	int M2 = 0;
	int M3 = 0;
	
	cout << "Me diga quantos numeoros vc quer: ";
	cin >> n;
	
	
	for(int i = 1; i <= n; i++){
		cin >> num;
		
		
		if (num > M1){
			M3 = M2;
			M2 = M1;
			M1 = num;
			
		}else if (num > M2) {
            M3 = M2;
            M2 = num;
            
        }else if (num > M3) {
            M3 = num;
        
        }else{
			num = 0;
		}
		
		soma = M1 + M2 + M3;
		
	}
	cout << "Sua soma dos 3 maiores numeros eh: " << soma << endl;
	
	return 0;
}
