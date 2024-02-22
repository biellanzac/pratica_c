#include <stdio.h>
#include <math.h>

int main() {
    double n;
    double somatorio = 0.0;
    double termo = 1.0;
    int i = 1;

    printf("Digite o valor de n: ");
    scanf("%lf", &n);

    while (fabs(termo) > 1e-6) {  // Paramos quando o termo se tornar pequeno o suficiente
        termo = pow(-1, i) * pow(-1 + n, i) / i;
        somatorio += termo;
        i++;
    }

    printf("O somatório aproximado é %.6lf\n", somatorio);

    return 0;
}

