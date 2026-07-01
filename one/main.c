#include <stdio;

int main() {
    float media;

    // Solicita a média final do estudante
    printf("Digite a média final do estudante: ");
    scanf("%f", &media);

    // Avalia a média de acordo com as condições
    if (media < 5.0) {
        printf("Você está reprovado.\n");
    } 
    else if (media < 7.0) {
        printf("Você está de recuperação.\n");
    } 
    else {
        printf("Parabéns! Você foi aprovado.\n");
    }

    return 0;
}