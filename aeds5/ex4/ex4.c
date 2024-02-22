#include <stdio.h>

void somarVetores(int vetor1[], int vetor2[], int vetorResultado[], int tamanho) {
	int i;
    for (i = 0; i < tamanho; i++) {
        vetorResultado[i] = vetor1[i] + vetor2[i];
    }
}

int main() {
    int tamanho, i;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int vetor1[tamanho], vetor2[tamanho], vetorResultado[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    somarVetores(vetor1, vetor2, vetorResultado, tamanho);

    printf("Resultado da soma:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetorResultado[i]);
    }

    return 0;
}

