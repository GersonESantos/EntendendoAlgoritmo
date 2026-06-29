#include <stdio.h>

/**
 * Função de Pesquisa Binária
 * Retorna o índice do item se encontrado, caso contrário retorna -1.
 */
int pesquisa_binaria(int lista[], int tamanho, int item) {
    int baixo = 0;              // ❶
    int alto = tamanho - 1;     // ❶

    while (baixo <= alto) {     // ❷
        int meio = (baixo + alto) / 2; // ❸
        int chute = lista[meio];

        if (chute == item) {    // ❹
            return meio;
        }
        
        if (chute > item) {     // ❺
            alto = meio - 1;
        } else {                // ❻
            baixo = meio + 1;
        }
    }

    return -1; // ❼ Em C, usamos -1 para representar "None" ou não encontrado.
}

int main() {
    int minha_lista[] = {1, 3, 5, 7, 9}; // ❽
    int tamanho = sizeof(minha_lista) / sizeof(minha_lista[0]);

    // Teste 1: Procurando o número 3
    int resultado1 = pesquisa_binaria(minha_lista, tamanho, 3);
    printf("Posicao de 3: %d\n", resultado1); // ❾ Deve imprimir 1

    // Teste 2: Procurando o número -1
    int resultado2 = pesquisa_binaria(minha_lista, tamanho, -1);
    if (resultado2 == -1) {
        printf("Posicao de -1: None (Nao encontrado)\n"); // ❿
    } else {
        printf("Posicao de -1: %d\n", resultado2);
    }

    return 0;
}