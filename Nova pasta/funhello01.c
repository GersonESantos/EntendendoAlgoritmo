#include <stdio.h>

void hell(const char *a, const char *b) {
    printf("Hello, World! The values are: %s %s\n", a, b);
}

int main(void) {
    const char *x = "Gerson";
    const char *y = "Santos";
    hell(x, y);
    return 0;
}