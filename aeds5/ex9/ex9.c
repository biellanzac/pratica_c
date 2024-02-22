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
    printf("Digite a quantidade de termos da sequ�ncia de Fibonacci a ser impressa: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O n�mero de termos deve ser um n�mero natural (n�o negativo).\n");
    } else {
        printf("Sequ�ncia de Fibonacci com %d termos: ", n);
        imprimirFibonacci(n);
        printf("\n");
    }

    return 0;
}

