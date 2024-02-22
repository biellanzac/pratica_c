#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número natural: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("%d não é um número primo.\n", numero);
    } else {
        int primo = 1;

        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
        }

        if (primo) {
            printf("%d é um número primo.\n", numero);
        } else {
            printf("%d não é um número primo.\n", numero);
        }
    }
    }
    return 0;
}
