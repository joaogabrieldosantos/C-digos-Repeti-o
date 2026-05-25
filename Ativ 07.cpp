7) Altere o programa anterior para mostrar no final a soma dos números.

_______________________________________________________________________________________

#include < iostream>
using namespace std;

int main(){
int num = 0;
int n1 = 0;
int n2 = 0;
int menor;
int soma = 0;

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
	

    soma = soma + menor;
}

cout << "A soma dos numeros no intervalor eh: " << soma << endl;

return 0;
}
