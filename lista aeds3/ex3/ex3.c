#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;

    printf("Digite números inteiros:\n");

    do {
        scanf("%d", &numero);

        if (numero != 0) {
            soma += numero;
            contador++;
        }

    } while (numero != 0);

    if (contador > 0) {
        int media = (int)soma / contador;
        printf("A média dos números (excluindo o zero) é: %i\n", media);
    } else {
        printf("Nenhum número diferente de zero foi inserido.\n");
    }

    return 0;
}
