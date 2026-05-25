#include <iostream>
using namespace std;

int main(){
int notas;
int i;


do{
	cout << "Me informe o valor de uma nota: ";
	cin >> notas;
	
	if (notas > 10){
		cout << "Valor invalido!! " << endl;
		return 0;
	}
	
	
}while(notas >= 0);

 return 0;
}
