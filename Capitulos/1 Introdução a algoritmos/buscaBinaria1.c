#include <stdio.h>
int procurabinaria(int[], int, int);

int main() {
	int minhalista[] = {13, 14, 19, 43, 47, 52, 65, 82, 89, 91};
	printf("A lista deve estar ordenada\n");
	int len = sizeof(minhalista) / sizeof(minhalista[0]);
	printf("%d / %d\n", sizeof(minhalista) , sizeof(minhalista[0])); // 28
	printf("%d\n", len); // 7

    printf("item de indice  %d numero %d\n",  procurabinaria(minhalista, 82, len) , minhalista[procurabinaria(minhalista, 82, len)]);  // 1
    
	printf("%d\n", procurabinaria(minhalista, -1, len)); //-1
	
	
	return 0;
}

int procurabinaria(int lista[], int item, int len) {
	int baixo = 0;
	int alto = len;
	while (baixo <= alto) {
		int meio = (baixo + alto) / 2;
		int palpite = lista[meio];
		if (palpite == item) {
			return meio;
		} else if (palpite > item) {
			alto = meio - 1;
		} else {
			baixo = meio + 1;
		}
	}
	return -1; // número não encontrado
}