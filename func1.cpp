#include <iostream>

using namespace std;


float soma (float n1, float n2) {
	return n1 + n2;
}



float subtracao (float n1, float n2) {
return n1 - n2;
}

      
float multiplicacao (float n1, float n2) {
return n1 * n2;
}


float divisao (float n1, float n2) {
return n1 / n2;
}

int main () {
	float primeiroNumero;
	float segundoNumero;
	
	cout << "Entre com o primeiro numero:";
	cin >> primeiroNumero;
	
	cout << "Entre com o segundo numero:";
	cin >> segundoNumero;
	
	cout << "Soma:" << soma (primeiroNumero, segundoNumero) << "\ n";
	cout << "Subtracao:" << subtracao (primeiroNumero, segundoNumero) << "\ n";
	cout << "Multiplicacao:" << multiplicacao (primeiroNumero, segundoNumero) << "\ n";
	cout << "Divisao:" << divisao (primeiroNumero, segundoNumero) << "\ n";
	
	return 0;
}