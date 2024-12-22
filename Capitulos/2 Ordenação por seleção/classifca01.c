#include <stdio.h>
int lista[9]={4,5,8,2,9,1,3,7,6};
int trocas=0;
int comp=0;
void main() {
    int k;
    printf("CLASSIFICACAO\n\n");
    printf("Lista original: ");
    for (k=0; k<9; k++) {
        printf("%d ",lista[k]);
    }
    printf("\nLista ordenada: ");
    for (k=0; k<9; k++) {
        printf("%d ",lista[k]);
    }
    printf("\n\nComparacoes:%d\ntrocas:%d\n\n",comp,trocas);
}