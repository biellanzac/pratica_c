#include <stdio.h>


int main() {
    int n=1000;
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("O somat�rio �: %d\n", soma);

    return 0;
}
