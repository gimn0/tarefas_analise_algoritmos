#include <iostream>
#include <ctime>
#include <chrono>

// variaveis globais
const size_t VET_TAM {25};

// iniciadores das funcoes
int *selection_sort(int vetor[]);

int main(){
	int v[VET_TAM] {
        22, 3, 12, 11, 20, 
        7, 2, 13, 5, 24, 
        6, 1, 16, 25, 19, 
        14, 15, 9, 23, 4, 
        18, 17, 10, 8, 21
    };

	auto t_ini = std::chrono::steady_clock::now(); // variavel para armazenar tempo incial
	int *selection_vetor = selection_sort(v);
	std::chrono::duration<double> dur = std::chrono::steady_clock::now() - t_ini; // duracao = tempo final - tempo inicial

	std::cout << "Tempo de execucao: " << (dur / std::chrono::milliseconds(1)) << "ms\n";
	std::cout << "vetor apos selection sort: " << '\n';
	for (size_t i = 0; i < VET_TAM; i++)
	{
		std::cout << selection_vetor[i] << ' ';
	}
	
	return 0;
}

int *selection_sort(int vetor[]) {
	int i {}, k {}, t {};
	
	for(i = 0; i < VET_TAM - 1; i++){
		for(k = i; k < VET_TAM; k++){
			if(vetor[k] < vetor[i]){  
				t = vetor[i];
				vetor[i] = vetor[k];
				vetor[k] = t;
			}
		}
	}

	return vetor;
}