#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    if (a + b > c && a + c > b && b + c > a) {
        double angulo_a = acos((b*b + c*c - a*a) / (2.0 * b * c));
        double angulo_b = acos((a*a + c*c - b*b) / (2.0 * a * c));
        double angulo_c = acos((a*a + b*b - c*c) / (2.0 * a * b));

        angulo_a = angulo_a * 180.0 / M_PI;
        angulo_b = angulo_b * 180.0 / M_PI;
        angulo_c = angulo_c * 180.0 / M_PI;

        if (angulo_a < 90 && angulo_b < 90 && angulo_c < 90) {
            printf("O triângulo é agudo.\n");
        } else if (angulo_a > 90 || angulo_b > 90 || angulo_c > 90) {
            printf("O triângulo é obtuso.\n");
        } else {
            printf("O triângulo é reto.\n");
        }

        if (a == b && b == c) {
            printf("O triângulo é equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }

        printf("Ângulo A: %.2lf graus\n", angulo_a);
        printf("Ângulo B: %.2lf graus\n", angulo_b);
        printf("Ângulo C: %.2lf graus\n", angulo_c);
    } else {
        printf("Os valores fornecidos não formam um triângulo.\n");
    }

    return 0;
}

