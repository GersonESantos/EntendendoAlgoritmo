#include <stdio.h>
#include <stdbool.h>

int main() {
    // Variáveis para armazenar os dados do cliente
    int idade;
    int opcao_estudante;
    bool eh_estudante;

    printf("=== SISTEMA DE BILHERIA - CINEMA ===\n\n");

    // 1. Solicitar a idade do cliente
    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    // 2. Perguntar se ele é estudante
    printf("O cliente é estudante? (Digite 1 para SIM ou 0 para NÃO): ");
    scanf("%d", &opcao_estudante);

    // Convertendo a opção numérica para o tipo booleano
    eh_estudante = (opcao_estudante == 1);

    printf("\n--- Resultado da Análise ---\n");

    // 3. Verificar se idade < 18 OU estudante é verdadeiro
    // Usamos o operador lógico OU (||)
    if (idade < 18 || eh_estudante == true) {
        // 4. Se a condição for satisfeita
        printf("🎟️ Meia-entrada aplicada.\n");
    } else {
        // 5. Caso contrário
        printf("💵 Valor integral.\n");
    }

    printf("====================================\n");

    return 0;
}