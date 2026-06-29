#include <stdio.h>

void print(int n) {
    if (n == 0) {
        return;
    }
    printf("%d\n", n);
    print(n - 1);
}
int main(void) {
    
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    print(n);
    return 0;
}
