#include <stdio.h>

// Função de particionamento do QuickSort
int particiona(int *v, int inicio, int fim) {
    // Escolher o pivô como o elemento central do vetor
    int pivot = v[(inicio + fim) / 2];
    
    // Reorganizar os elementos em torno do pivô
    while (inicio <= fim) {
        // Avançar da esquerda até encontrar um elemento maior que o pivô
        while (v[inicio] < pivot) 
            inicio++;
        
        // Avançar da direita até encontrar um elemento menor que o pivô
        while (v[fim] > pivot) 
            fim--;
        
        // Trocar os elementos encontrados
        if (inicio <= fim) {
            int aux = v[inicio];
            v[inicio] = v[fim];
            v[fim] = aux;
            inicio++;
            fim--;
        }
    }
    // Retornar a posição para dividir o vetor em duas partes
    return inicio;
}

// Função principal do QuickSort
void quick_Sort(int *v, int inicio, int fim) {
    if (inicio < fim) {
        // Particiona o vetor e obtém a posição de divisão
        int pos = particiona(v, inicio, fim);

        // Ordena a sublista à esquerda do pivô
        quick_Sort(v, inicio, pos - 1);

        // Ordena a sublista à direita do pivô
        quick_Sort(v, pos, fim);
    }
}

// Função para imprimir o vetor
void imprimir(int *v, int tam) {
    for (int i = 0; i < tam; i++) { // Percorre cada elemento do vetor
        printf("%d ", v[i]);       // Imprime o elemento atual
    }
    printf("\n"); // Quebra de linha ao final da impressão
}

// Função principal (entrada do programa)
int main(void) {
    // Vetor de exemplo para ordenação
    int vet[] = {47, 35, 12, 49, 56, 25, 71, 83, 5, 3, 1, 70, 99, 10, 61}; 
    int tam = sizeof(vet) / sizeof(vet[0]); // Calcula o tamanho do vetor

    // Imprime o vetor original
    printf("Vetor original:\n");
    imprimir(vet, tam);

    // Aplica o algoritmo QuickSort para ordenar o vetor
    quick_Sort(vet, 0, tam - 1);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    imprimir(vet, tam);

    return 0; // Indica que o programa terminou com sucesso
}
