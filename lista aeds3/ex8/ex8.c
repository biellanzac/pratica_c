#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %i\n", numero, fatorial);
    }

    return 0;
}
