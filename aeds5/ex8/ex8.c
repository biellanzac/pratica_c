#include <stdio.h>

void imprimirTrianguloDecrescente(int n) {
	int i;
    if (n == 0) {
        return;
    }

    for (i = 0; i < n; i++) {
        printf("*");
    }

    printf("\n");

    imprimirTrianguloDecrescente(n - 1);
}

int main() {
    int n;
    printf("Digite o número de linhas para o triângulo: ");
    scanf("%d", &n);

    imprimirTrianguloDecrescente(n);

    return 0;
}

