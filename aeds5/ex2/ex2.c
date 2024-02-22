#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, i;

    printf("Série de Fibonacci com %d termos:\n", n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
}

int main() {
    int n;
    printf("Digite o número de termos da série de Fibonacci a ser impressa: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número de termos deve ser um número natural (não negativo).\n");
    } else {
        printFibonacci(n);
    }

    return 0;
}
