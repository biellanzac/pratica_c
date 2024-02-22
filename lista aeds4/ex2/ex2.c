#include <stdio.h>

int main() {
    int numeros[10]; 
    int novoValor;
    int ocorrencias = 0;
    int posicoes[10]; 
    int i;

    printf("Digite 10 n�meros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
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
            printf("Posi��o %d\n", posicoes[i]);
        }
    } else {
        printf("O valor n�o foi encontrado no vetor.\n");
    }

    return 0;
}

