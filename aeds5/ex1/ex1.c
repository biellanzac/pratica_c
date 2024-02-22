#include <stdio.h>

int parOuImpar(int valor) {
    if (valor % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int resultado = parOuImpar(numero);

    if (resultado == 1) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    return 0;
}
