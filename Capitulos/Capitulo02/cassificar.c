
#include <stdio.h>
int lista[9]={4,5,8,2,9,1,3,7,6};
int trocas=0;
int comp=0;
void classifica(int *lista, int tamanho); 

void main() {
    int k;
    printf("CLASSIFICACAO\n\n");
    printf("Lista original: ");
    for (k=0; k<9; k++) {
        printf("%d ",lista[k]);
    }
    classifica(lista,9);
    printf("\nLista ordenada: ");
    for (k=0; k<9; k++) {
        printf("%d ",lista[k]);
    }
    printf("\n\nComparacoes:%d\ntrocas:%d\n\n",comp,trocas);
}

void classifica(int *lista, int tamanho) {
    int i,j,aux;
    trocas=0;
    for (i=0; i<tamanho-1; i++) {
        comp++;
        if (lista[i]>lista[i+1]) {
            aux=lista[i+1];
            lista[i+1]=lista[i];
            lista[i]=aux;
            j=i-1;
            trocas++;
            while (j>=0) {
                comp++;
                if (aux<lista[j]) {
                    lista[j+1]=lista[j];
                    lista[j]=aux;
                    trocas++;
                } else {
                    break;
                }
                j=j-1;
            }
        }
    }
}