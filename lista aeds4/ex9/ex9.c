#include <stdio.h>

#define MAX 10

void lerMatriz(int n, int m, int matriz[MAX][MAX]) {
	int i, j;
    printf("Digite os elementos da matriz %dx%d:\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Elemento (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int n, int m, int matriz[MAX][MAX]) {
	int i, j;
    printf("Matriz %dx%d:\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrizes(int n, int m, int p, int A[MAX][MAX], int B[MAX][MAX], int resultado[MAX][MAX]) {
	int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < m; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n, m, p;
    int A[MAX][MAX], B[MAX][MAX], resultado[MAX][MAX];

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &n);
    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &p);

    if (n < 1 || m < 1 || p < 1 || n > MAX || m > MAX || p > MAX || m != p) {
        printf("As dimensões das matrizes devem ser maiores que 0 e no máximo %d x %d e o número de colunas de A deve ser igual ao número de linhas de B.\n", MAX, MAX);
        return 1;
    }

    lerMatriz(n, m, A);
    lerMatriz(m, p, B);

    multiplicarMatrizes(n, m, p, A, B, resultado);

    printf("Resultado da multiplicação:\n");
    imprimirMatriz(n, p, resultado);

    return 0;
}

