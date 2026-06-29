#include <stdio.h>

int main() {
    // 1. Declaração e inicialização de um array com 5 elementos
    int numeros[5] = {10, 20, 30, 40, 50};

    // 2. Acessando um elemento específico (lembrando que o índice começa em 0)
    printf("O primeiro elemento e: %d\n", numeros[0]);
    printf("O terceiro elemento e: %d\n\n", numeros[2]);

    // 3. Percorrendo o array com um laço 'for'
    printf("Lista completa de elementos:\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Indice %d: Valor %d\n", i, numeros[i]);
    }

    return 0;
}