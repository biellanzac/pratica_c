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
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    int resultado = parOuImpar(numero);

    if (resultado == 1) {
        printf("O n�mero � par.\n");
    } else {
        printf("O n�mero � �mpar.\n");
    }

    return 0;
}
