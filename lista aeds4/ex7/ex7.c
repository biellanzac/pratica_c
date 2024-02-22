#include <stdio.h>

int ehPrimo(int num) {
	int i;
    if (num <= 1) {
        return 0; 
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n, count = 0, num = 2;

    printf("Digite um n�mero natural n: ");
    scanf("%i", &n);

    if (n <= 0) {
        printf("O valor de n deve ser maior que zero.\n");
        return 1;
    }

    printf("Os primeiros n�meros primos s�o:\n");

    while (count <= n) {
        if (ehPrimo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }


    return 0;
}

