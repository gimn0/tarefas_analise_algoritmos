#include <iostream>
#include <ctime>
#include <chrono>

// variaveis globais
const size_t VET_TAM {25};

// iniciacoes das funcoes
int *bubble_sort(int vetor[]);

int main() {
	int v[VET_TAM] {
        22, 3, 12, 11, 20, 
        7, 2, 13, 5, 24, 
        6, 1, 16, 25, 19, 
        14, 15, 9, 23, 4, 
        18, 17, 10, 8, 21
    };
	
	auto t_ini = std::chrono::steady_clock::now(); // variavel para armazenar tempo incial
	int *bubble_vetor = bubble_sort(v);
	std::chrono::duration<double> dur = std::chrono::steady_clock::now() - t_ini; // duracao = tempo final - tempo inicial

	std::cout << "Tempo de execucao: " << (dur / std::chrono::milliseconds(1)) << "ms\n";
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
		for(k = 0; k < VET_TAM - 1; k++){
			if(vetor[k] > vetor[k + 1]){
				t = vetor[k];
				vetor[k] = vetor[k + 1];
				vetor[k + 1] = t;
			}   	
		}
	}

	return vetor;
}