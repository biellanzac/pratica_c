#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("N�o � poss�vel calcular o fatorial de um n�mero negativo.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d � %i\n", numero, fatorial);
    }

    return 0;
}
