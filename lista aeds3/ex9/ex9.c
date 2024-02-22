#include <stdio.h>

int main() {
    int numero;

    printf("Digite um n�mero natural: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("%d n�o � um n�mero primo.\n", numero);
    } else {
        int primo = 1;

        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
        }

        if (primo) {
            printf("%d � um n�mero primo.\n", numero);
        } else {
            printf("%d n�o � um n�mero primo.\n", numero);
        }
    }
    }
    return 0;
}
