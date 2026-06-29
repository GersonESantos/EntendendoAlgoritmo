#include <stdio.h>

int main() {
    // 1. Declaração e inicialização
    int numeros[5] = {50, 10, 40, 20, 30}; // Alterei a ordem para testar a ordenação
    int i, j, temp;
    int n = 5;

    printf("Array original:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n\n");

    // 2. Algoritmo Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Se o elemento atual for maior que o próximo, eles trocam de lugar
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // 3. Exibindo a lista ordenada
    printf("Lista ordenada (Crescente):\n");
    for (i = 0; i < n; i++) {
        printf("Indice %d: Valor %d\n", i, numeros[i]);
    }

    return 0;
}