#include <stdio.h>

int calcularCoeficienteBinomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return calcularCoeficienteBinomial(n - 1, k - 1) + calcularCoeficienteBinomial(n - 1, k);
}

int main() {
    int n, i, j, coeficiente;

    printf("Digite o número de linhas do Triângulo de Pascal: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número natural positivo.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            int coeficiente = calcularCoeficienteBinomial(i, j);
            printf("%d ", coeficiente);
        }
        printf("\n");
    }

    return 0;
}

