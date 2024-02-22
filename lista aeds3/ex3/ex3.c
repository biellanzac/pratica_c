#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;

    printf("Digite n�meros inteiros:\n");

    do {
        scanf("%d", &numero);

        if (numero != 0) {
            soma += numero;
            contador++;
        }

    } while (numero != 0);

    if (contador > 0) {
        int media = (int)soma / contador;
        printf("A m�dia dos n�meros (excluindo o zero) �: %i\n", media);
    } else {
        printf("Nenhum n�mero diferente de zero foi inserido.\n");
    }

    return 0;
}
