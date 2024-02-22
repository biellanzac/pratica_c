#include <stdio.h>
#include <stdlib.h>

int* multiplicarMatrizes(int** matriz1, int** matriz2, int linhas1, int linhas2, int colunas1, int colunas2) {
    if (colunas1 != linhas2) {
        return NULL; // Produto não é possível
    }
    
    int i, j, k;

    int** matrizResultado = (int**)malloc(linhas1 * sizeof(int*));

    for (i = 0; i < linhas1; i++) {
        matrizResultado[i] = (int*)malloc(colunas2 * sizeof(int));
    }

    for (i = 0; i < linhas1; i++) {
        for (j = 0; j < colunas2; j++) {
            matrizResultado[i][j] = 0;
            for (k = 0; k < colunas1; k++) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return matrizResultado;
}

void liberarMatriz(int** matriz, int linhas) {
	int i;
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int linhas1, colunas1, linhas2, colunas2, i, j;
    printf("Digite o número de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &linhas1, &colunas1);

    printf("Digite o número de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &linhas2, &colunas2);

    if (colunas1 != linhas2) {
        printf("O produto das matrizes não é possível.\n");
        return 1;
    }

    int** matriz1 = (int**)malloc(linhas1 * sizeof(int*));
    for (i = 0; i < linhas1; i++) {
        matriz1[i] = (int*)malloc(colunas1 * sizeof(int));
    }

    int** matriz2 = (int**)malloc(linhas2 * sizeof(int*));
    for (i = 0; i < linhas2; i++) {
        matriz2[i] = (int*)malloc(colunas2 * sizeof(int));
    }

    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < linhas1; i++) {
        for (j = 0; j < colunas1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < linhas2; i++) {
        for (j = 0; j < colunas2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    int** matrizResultado = multiplicarMatrizes(matriz1, matriz2, linhas1, colunas1, colunas2);

    if (matrizResultado == NULL) {
        printf("O produto das matrizes não é possível.\n");
        return 1;
    }

    printf("Matriz Resultado:\n");
    for (i = 0; i < linhas1; i++) {
        for (j = 0; j < colunas2; j++) {
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    liberarMatriz(matriz1, linhas1);
    liberarMatriz(matriz2, linhas2);
    liberarMatriz(matrizResultado, linhas1);

    return 0;
}

