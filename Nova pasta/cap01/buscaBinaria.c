#include <stdio.h>
#include <stdlib.h>

// Função de Busca Binária Recursiva
int buscaBinariaRecursiva(int *vet, int chave, int inicio, int fim) {
    int meio;
    if (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (chave == vet[meio])
            return meio;
        else {
            if (chave < vet[meio])
                return buscaBinariaRecursiva(vet, chave, inicio, meio - 1);
            else
                return buscaBinariaRecursiva(vet, chave, meio + 1, fim);
        }
    }
    return -1; // elemento não encontrado
}

// Função de Busca Binária Iterativa
int buscaBinariaIterativa(int *vet, int chave, int fim) {
    int inicio = 0;
    int meio = (inicio + fim) / 2;

    while (inicio <= fim) {
        if (chave == vet[meio])
            return meio;
        else {
            if (chave < vet[meio])
                fim = meio - 1;
            else
                inicio = meio + 1;
        }
        meio = (inicio + fim) / 2;
    }
    return -1;
}

int main() {
    int vet[10] = {13, 14, 19, 43, 47, 52, 65, 82, 89, 91};
    int valor, op;

    do {
        printf("Digite um valor a ser buscado: ");
        scanf("%d", &valor);

        // Exemplo de chamada da função (ajustado para funcionamento lógico)
        printf("Resultado Iterativo: %d\n", buscaBinariaIterativa(vet, valor, 9));
        printf("Resultado Recursivo: %d\n", buscaBinariaRecursiva(vet, valor, 0, 9));

        printf("\nDigite 0 para sair ou 1 para continuar: ");
        scanf("%d", &op);
    } while (op != 0);

    return 0;
}