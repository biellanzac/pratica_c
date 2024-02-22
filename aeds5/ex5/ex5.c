#include <stdio.h>
#include <stdlib.h>

int* somarVetores(int vetor1[], int vetor2[], int tamanho) {
    int* vetorResultado = (int*)malloc(tamanho * sizeof(int)), i;

    if (vetorResultado == NULL) {
        printf("Falha na alocação de memória.\n");
        return 0;
    }

    for (i = 0; i < tamanho; i++) {
        vetorResultado[i] = vetor1[i] + vetor2[i];
    }

    return vetorResultado;
}

int main() {
    int tamanho, i;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int* vetor1 = (int*)malloc(tamanho * sizeof(int));
    int* vetor2 = (int*)malloc(tamanho * sizeof(int));

    if (vetor1 == NULL || vetor2 == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    int* vetorResultado = somarVetores(vetor1, vetor2, tamanho);

    printf("Resultado da soma:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetorResultado[i]);
    }

    free(vetor1);
    free(vetor2);
    free(vetorResultado);

    return 0;
}

