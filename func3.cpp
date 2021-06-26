#include <iostream>

using namespace std;

int main(){
	int numAlunos = 0;
	
	cout << "Escreva a quantidade de alunos: \n";
	cin >> numAlunos;
	
	string vetNomes [numAlunos];
	float vetNotas1 [numAlunos];
	float vetNotas2 [numAlunos];
	
	for (int num = 0; num < numAlunos; num++) {
		cout << "Digite o nome do " << num + 1 << " alunos: \n";
		cin >> vetNomes [num];
		cout << "Digite a nota do " << vetNomes[num] << " referente ao primeiro bimestre: \n";
		cin >> vetNotas1 [num];
		cout << "Digite a nota do " << vetNomes[num] << " referente ao segundo bimestre: \n";
		cin >> vetNotas2 [num];
	}
	
	for (int num = 0; num < numAlunos; num++) {
		float media = vetNotas1[num] + vetNotas2[num] / 2;
		if (media >= 6){
			cout << "Aluno: " << vetNomes[num] << " - Media: " << media << " APROVADO!\n";	
		}
		else{
			cout << "Aluno: " << vetNomes[num] << " - Media: " << media << " REPROVADO!\n";
		}
	}
	
	return 0;
}