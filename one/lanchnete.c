#include <stdio.h>

int main() {
    // 1. Definição dos preços fixos dos itens
    float preco_hamburguer = 12.0;
    float preco_batata = 7.0;
    float preco_refri = 5.0;

    // 2. Variáveis para armazenar as quantidades informadas pelo cliente
    int qtd_hamburguer, qtd_batata, qtd_refri;

    // 3. Variáveis para armazenar os subtotais e o total geral
    float total_hamburguer, total_batata, total_refri, total_pedido;

    // Entrada de dados: Solicitando as quantidades ao usuário
    printf("Digite a quantidade de hambúrgueres: ");
    scanf("%d", &qtd_hamburguer);

    printf("Digite a quantidade de batatas fritas: ");
    scanf("%d", &qtd_batata);

    printf("Digite a quantidade de refrigerantes: ");
    scanf("%d", &qtd_refri);

    // 4. Cálculo dos subtotais
    total_hamburguer = qtd_hamburguer * preco_hamburguer;
    total_batata = qtd_batata * preco_batata;
    total_refri = qtd_refri * preco_refri;

    // 5. Cálculo do valor total do pedido
    total_pedido = total_hamburguer + total_batata + total_refri;

    // 6. Exibição do resultado final
    printf("\n--- Resumo do Pedido ---\n");
    printf("Hambúrguer(es): %d x R$ %.2f = R$ %.2f\n", qtd_hamburguer, preco_hamburguer, total_hamburguer);
    printf("Batata(s) Frita(s): %d x R$ %.2f = R$ %.2f\n", qtd_batata, preco_batata, total_batata);
    printf("Refrigerante(s): %d x R$ %.2f = R$ %.2f\n", qtd_refri, preco_refri, total_refri);
    printf("------------------------\n");
    printf("Valor total a pagar: R$ %.2f\n", total_pedido);

    return 0;
}