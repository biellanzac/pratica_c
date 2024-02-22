#include <stdio.h>

void imprimirTriangulo(int n, int i) {
    if (n == 0) {
        return;
    }

    if (i < n) {
        printf("*");
        imprimirTriangulo(n, i + 1);
    } else {
        printf("\n");
        imprimirTriangulo(n - 1, 0);
    }
}

int main() {
    int n;
    printf("Digite o n�mero de linhas para o tri�ngulo: ");
    scanf("%d", &n);

    imprimirTriangulo(n, 0);

    return 0;
}

