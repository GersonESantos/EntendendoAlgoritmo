#include <stdio.h>
#include <stdlib.h>

// 1. MODIFICAÇÃO: Adicionado o campo 'peso' na estrutura
typedef struct NoGrafo {
    int valor;
    int peso;                // Custo da aresta (ex: distância entre cidades)
    struct NoGrafo *proximo;
} NoGrafo;

// 2. MODIFICAÇÃO: Função agora recebe o peso da conexão
void adicionar_no(NoGrafo **lista, int valor_no, int custo) {
    NoGrafo *novo_no = (NoGrafo*) malloc(sizeof(NoGrafo));
    
    if (novo_no == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }

    novo_no->valor = valor_no;
    novo_no->peso = custo;      // Atribui o custo à aresta
    novo_no->proximo = *lista;
    *lista = novo_no;
}

// 3. MODIFICAÇÃO: Impressão agora mostra o custo entre parênteses
void imprimir_lista(NoGrafo *lista) {
    while (lista != NULL) {
        printf("%d(custo:%d) -> ", lista->valor, lista->peso);
        lista = lista->proximo;
    }
    printf("NULL");
}

int main() {
    // Vetor de ponteiros para 4 vértices (índices 1 a 4)
    NoGrafo *lista_adjacencia[5];

    for (int i = 1; i <= 4; i++) {
        lista_adjacencia[i] = NULL;
    }

    // 4. EXEMPLO: Montando o tour ótimo da imagem anterior (Custo Total = 70)
    // Vertice 1 conecta com 2 (peso 10) e 4 (peso 25)
    adicionar_no(&lista_adjacencia[1], 2, 10);
    adicionar_no(&lista_adjacencia[1], 4, 25);

    // Vertice 2 conecta com 3 (peso 15) e 1 (peso 10)
    adicionar_no(&lista_adjacencia[2], 3, 15);
    adicionar_no(&lista_adjacencia[2], 1, 10);

    // Vertice 3 conecta com 4 (peso 20) e 2 (peso 15)
    adicionar_no(&lista_adjacencia[3], 4, 20);
    adicionar_no(&lista_adjacencia[3], 2, 15);

    // Vertice 4 conecta com 1 (peso 25) e 3 (peso 20)
    adicionar_no(&lista_adjacencia[4], 1, 25);
    adicionar_no(&lista_adjacencia[4], 3, 20);

    // Imprimindo a lista de adjacência ponderada
    printf("--- Lista de Adjacencia Ponderada (Foco no TSP) ---\n");
    for (int i = 1; i <= 4; i++) {
        if (lista_adjacencia[i] != NULL) {
            printf("Cidade %d: ", i);
            imprimir_lista(lista_adjacencia[i]);
            printf("\n");
        }
    }

    return 0;
}