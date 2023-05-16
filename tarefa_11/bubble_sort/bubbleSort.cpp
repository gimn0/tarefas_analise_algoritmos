#include <iostream>
#include <time.h>

// variaveis globais
const size_t VET_TAM {5};

// iniciacoes das funcoes
int *bubble_sort(int vetor[]);

int main() {
	int v[VET_TAM] {
        22, 3, 12, 11, 20//, 
        //7, 2, 13, 5, 24//, 
        //6, 1, 16, 25, 19//, 
        //14, 15, 9, 23, 4//, 
        //18, 17, 10, 8, 21
    };
	
	clock_t tempo {}; // variavel para armazenar tempo
	
	tempo = clock();
	int *bubble_vetor = bubble_sort(v);
	tempo = clock() - tempo; // tempo final - tempo inicial

	std::cout << "Tempo de execucao: " << tempo << '\n';
	std::cout << "vetor apos bubble sort: " << '\n';
	for (size_t i = 0; i < VET_TAM; i++)
	{
		std::cout << bubble_vetor[i] << ' ';
	}

	return 0;
}

// funcoes
int *bubble_sort(int vetor[]) {
	int i {}, k {}, t {};

	for(i = 1; i < VET_TAM; i++){
		for(k = 0; k< VET_TAM - 1; k++){
			if(vetor[k] > vetor[k + 1]){
				t = vetor[k];
				vetor[k] = vetor[k + 1];
				vetor[k + 1] = t;
			}   	
		}
	}

	return vetor;
}