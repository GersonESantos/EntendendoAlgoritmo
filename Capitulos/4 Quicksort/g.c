#include <stdio.h>

// Função de particionamento
int particiona(int *v, int inicio, int fim) {
    // Escolher o pivô como o elemento central
    int pivot = v[(inicio + fim) / 2];
    while (inicio <= fim) {
        // Percorrer da esquerda até encontrar elemento maior que o pivô
        while (v[inicio] < pivot) 
            inicio++;
        // Percorrer da direita até encontrar elemento menor que o pivô
        while (v[fim] > pivot) 
            fim--;
        // Trocar elementos se necessário
        if (inicio <= fim) {
            int aux = v[inicio];
            v[inicio] = v[fim];
            v[fim] = aux;
            inicio++;
            fim--;
        }
    }
    return inicio;
}

// Função principal do QuickSort
void quick_Sort(int *v, int inicio, int fim) {
    if (inicio < fim) {
        int pos = particiona(v, inicio, fim);
        quick_Sort(v, inicio, pos - 1);
        quick_Sort(v, pos, fim);
    }
}

// Função para imprimir o vetor
void imprimir(int *v, int tam) {
    for (int i = 0; i < tam; i++) { // Corrigido: "<= tam" para "< tam"
        printf("%d ", v[i]);
    }
    printf("\n");
}

// Função principal
int main(void) {
    int vet[] = {47, 35, 12, 49, 56, 25, 71, 83, 5, 3, 1, 70, 99, 10, 61}; 
    int tam = sizeof(vet) / sizeof(vet[0]);

    printf("Vetor original:\n");
    imprimir(vet, tam);

    quick_Sort(vet, 0, tam - 1);

    printf("Vetor ordenado:\n");
    imprimir(vet, tam);

    return 0;
}
