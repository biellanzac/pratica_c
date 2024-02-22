#include <stdio.h>

int calcularMDC(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    int mdc = calcularMDC(num1, num2);

    if (mdc == 1) {
        printf("%d e %d são primos entre si.\n", num1, num2);
    } else {
        printf("%d e %d não são primos entre si. O MDC é %d.\n", num1, num2, mdc);
    }

    return 0;
}

