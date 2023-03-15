#include <iostream>
#include <iomanip>

const size_t MAT_TAM {6}; // tamanho matriz

int main() {
    int graf[MAT_TAM][MAT_TAM], 
        num {};

    for (size_t i = 0; i < MAT_TAM; ++i) {
        for (size_t j = 0; j < MAT_TAM; ++j) {
            std::cout << "Digite a entrada ou saida (validos: -1, 0, 1) do no (" << i << ", " << j << "):" << std::endl;
            std::cin >> num;
            
            graf[i][j] = num;
            std::cout << '\n';
        }
    }

    int cont_entrada {}, cont_saida {}; // contadores de entrada e saída

    // std::cout << std::setw(38) << "Matriz:" << std::endl;
    for (size_t i = 0; i < MAT_TAM; ++i) {
        for (size_t j = 0; j < MAT_TAM; ++j) {
            if (graf[i][j] > 0)
                ++cont_saida;
            else if (graf[i][j] < 0)
                ++cont_entrada;

            // std::cout << std::setw(10) << graf[i][j];
        }

        std::cout << "Grau de entrada da linha " << i << ": " << cont_entrada << std::endl;
        std::cout << "Grau de saida da linha " << i << ": " << cont_saida << std::endl;

        cont_entrada = 0;
        cont_saida = 0;

        std::cout << '\n';
    }
}