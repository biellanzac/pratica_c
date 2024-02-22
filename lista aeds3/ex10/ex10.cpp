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

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    int mdc = calcularMDC(num1, num2);

    if (mdc == 1) {
        printf("%d e %d s�o primos entre si.\n", num1, num2);
    } else {
        printf("%d e %d n�o s�o primos entre si. O MDC � %d.\n", num1, num2, mdc);
    }

    return 0;
}

