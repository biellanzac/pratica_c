#include <stdio.h>

int binomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomial(n - 1, k - 1) + binomial(n - 1, k);
    }
}

void imprimirTrianguloPascal(int n) {
	int linha, espaco, k;
    for (linha = 0; linha < n; linha++) {
        for (k = 0; k <= linha; k++) {
            printf("%d ", binomial(linha, k));
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o número de linhas para o Triângulo de Pascal: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O número de linhas deve ser um número natural (maior ou igual a 1).\n");
    } else {
        imprimirTrianguloPascal(n);
    }

    return 0;
}

