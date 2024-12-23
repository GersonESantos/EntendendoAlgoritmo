#include <stdio.h>
#include <time.h>
#include <math.h>

// Função de complexidade O(1): Soma dois números
void O1_example() {
    int a = 5, b = 10;
    int sum = a + b; // Operação constante
}

// Função de complexidade O(n): Soma de um vetor
void On_example(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) { // Loop simples, n iterações
        sum += arr[i];
    }
}

// Função de complexidade O(n^2): Verifica todos os pares
void On2_example(int *arr, int n) {
    for (int i = 0; i < n; i++) { // Loop aninhado, n * n iterações
        for (int j = 0; j < n; j++) {
            int temp = arr[i] + arr[j];
        }
    }
}

// Função de complexidade O(log n): Busca binária
void Ologn_example(int *arr, int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}

// Função principal para medir e exibir tempos de execução
int main() {
    int n = 1000; // Tamanho inicial do vetor
    int arr[n];
    
    // Preenchendo o vetor com valores
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Tamanhos testados: %d, %d, %d...\n\n", n, n * 10, n * 100);

    // Testando diferentes complexidades
    for (int size = n; size <= n * 100; size *= 10) {
        printf("Tamanho do vetor: %d\n", size);
        
        // Atualizar vetor para o novo tamanho
        int arr[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }

        // O(1)
        clock_t start = clock();
        O1_example();
        clock_t end = clock();
        printf("O(1): %lf segundos\n", (double)(end - start) / CLOCKS_PER_SEC);

        // O(n)
        start = clock();
        On_example(arr, size);
        end = clock();
        printf("O(n): %lf segundos\n", (double)(end - start) / CLOCKS_PER_SEC);

        // O(n^2)
        start = clock();
        On2_example(arr, size);
        end = clock();
        printf("O(n^2): %lf segundos\n", (double)(end - start) / CLOCKS_PER_SEC);

        // O(log n)
        start = clock();
        Ologn_example(arr, size, size / 2); // Procurando o valor central
        end = clock();
        printf("O(log n): %lf segundos\n", (double)(end - start) / CLOCKS_PER_SEC);

        printf("\n");
    }

    return 0;
}
