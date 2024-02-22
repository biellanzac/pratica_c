#include <stdio.h>

int main() {
    int numeros[10]; 
    int novoValor;
    int ocorrencias = 0;
    int posicoes[10]; 
    int i;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite um novo valor: ");
    scanf("%d", &novoValor);

    for (i = 0; i < 10; i++) {
        if (numeros[i] == novoValor) {
            posicoes[ocorrencias] = i;
            ocorrencias++;
        }
    }

    if (ocorrencias > 0) {
        printf("O valor ocorre %d vezes:\n", ocorrencias);
        for (i = 0; i < ocorrencias; i++) {
            printf("Posição %d\n", posicoes[i]);
        }
    } else {
        printf("O valor não foi encontrado no vetor.\n");
    }

    return 0;
}

