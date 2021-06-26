#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int tamanhoVetor[50];
	
	srand (time(NULL));
	int aleatorio = rand() % 100;
	cout << aleatorio;
	
	for (int num = 0; num < 50; num++){
		tamanhoVetor [num] = rand() % 300;
	}
	
	for (int num = 0; num < 50; num++){
		int posicaoAnt = 1;
		if(num > 0){
			posicaoAnt = tamanhoVetor [num -1];
		}
		cout <<"Posicao: " <<num << " Valor:" << tamanhoVetor[num] << "\n";
		cout <<"Posicao: " <<num << " Calculo:" << tamanhoVetor[num] * posicaoAnt << "\n";
	}
	
	
	return 0;
}