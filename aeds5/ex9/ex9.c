#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int result = fibonacci(n - 1) + fibonacci(n - 2);
        return result;
    }
}

void imprimirFibonacci(int n) {
    if (n <= 0) {
        return;
    }

    imprimirFibonacci(n - 1);

    int fib = fibonacci(n - 1);
    printf("%d ", fib);
}

int main() {
    int n;
    printf("Digite a quantidade de termos da sequência de Fibonacci a ser impressa: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número de termos deve ser um número natural (não negativo).\n");
    } else {
        printf("Sequência de Fibonacci com %d termos: ", n);
        imprimirFibonacci(n);
        printf("\n");
    }

    return 0;
}

