#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um nó do grafo (tipo NoGrafo)
typedef struct NoGrafo {
    int valor;
    struct NoGrafo *proximo;
} NoGrafo;

// Função para adicionar um nó à lista de adjacência
// Nota: Usamos NoGrafo **lista para poder alterar o ponteiro original na main
void adicionar_no(NoGrafo **lista, int valor_no) {
    NoGrafo *novo_no = (NoGrafo*) malloc(sizeof(NoGrafo)); // novo(NoGrafo)
    
    if (novo_no == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }

    novo_no->valor = valor_no;
    novo_no->proximo = *lista; // O novo nó aponta para o atual início da lista
    *lista = novo_no;          // O início da lista passa a ser o novo nó
}

// Função para imprimir a lista de adjacência
void imprimir_lista(NoGrafo *lista) {
    while (lista != NULL) { // enquanto (lista <> nulo)
        printf("%d -> ", lista->valor);
        lista = lista->proximo;
    }
    printf("NULL");
}

// Programa principal
int main() {
    // Criando uma lista para representar o grafo (vetor de ponteiros)
    // Em C, vetores começam em 0. Usaremos tamanho 101 para facilitar o uso do índice 1..100
    NoGrafo *lista_adjacencia[101];

    // Inicializando a lista (para i de 1 ate 100)
    for (int i = 1; i <= 100; i++) {
        lista_adjacencia[i] = NULL;
    }

    // Adicionando arestas ao grafo (exemplo do algoritmo)
    // Passamos &lista_adjacencia[i] para que a função possa alterar o ponteiro
    adicionar_no(&lista_adjacencia[1], 2);
    adicionar_no(&lista_adjacencia[1], 3);
    adicionar_no(&lista_adjacencia[2], 4);
    adicionar_no(&lista_adjacencia[3], 4);

    // Imprimindo a lista de adjacência para cada vértice do grafo
    printf("--- Lista de Adjacencia ---\n");
    for (int i = 1; i <= 100; i++) {
        if (lista_adjacencia[i] != NULL) { // se (lista_adjacencia[i] <> nulo)
            printf("Vertice %d: ", i);
            imprimir_lista(lista_adjacencia[i]);
            printf("\n"); // escreval()
        }
    }

    return 0;
}