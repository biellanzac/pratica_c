#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, i;

    printf("S�rie de Fibonacci com %d termos:\n", n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
}

int main() {
    int n;
    printf("Digite o n�mero de termos da s�rie de Fibonacci a ser impressa: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O n�mero de termos deve ser um n�mero natural (n�o negativo).\n");
    } else {
        printFibonacci(n);
    }

    return 0;
}
