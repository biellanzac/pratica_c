#include <stdio.h>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calcularMMC(int a, int b) {
    int mdc = calcularMDC(a, b);
    int mmc = (a * b) / mdc;
    return mmc;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    int mmc = calcularMMC(num1, num2);

    printf("O MMC de %d e %d é %d.\n", num1, num2, mmc);

    return 0;
}

