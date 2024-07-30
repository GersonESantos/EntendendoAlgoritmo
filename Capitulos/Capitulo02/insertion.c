#include<stdio.h>
#define N 9
int lista[N]={4,5,8,2,9,1,3,7,6};

//int lista[N]={9,8,7,6,5,4,3,2,1};
int trocas=0;
int comp=0;
void main() {
    int k;
	printf("INSERTION SORT\n\n");
	printf("Lista original: ");
	for(k=0;k<N;k++) {printf("%d ",lista[k]);}
	insertionSort(lista,N);
    printf("\nLista ordenada: ");
	for(k=0;k<N;k++) {printf("%d ",lista[k]);}
	printf("\n\nComparacoes:%d\ntrocas:%d\n\n",comp,trocas);
}

void insertionSort(int *lista, int tamanho) {
    int i,j,aux;
    trocas=0;
    for(i=0; i<tamanho-1; i++) {
      	comp++;
        if(lista[i]>lista[i+1]) {
           aux=lista[i+1];
           lista[i+1]=lista[i];
		   lista[i]=aux;
           j=i-1;
           trocas++;
           while(j>=0){
		   	  comp++;
		   	  if(aux<lista[j]){
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


