#include <stdio.h>
#include <math.h>

double calcularSerie(int numeroDeTermos) {
    double resultado = 0.0;
    int i;
    for (i = 1; i <= numeroDeTermos; i++) {
        resultado += pow(-1, i - 1) * 4.0 / (2 * i - 1);
    }
    return resultado;
}

int main() {
    int numeroDeTermos;
    printf("Digite o n�mero de termos: ");
    scanf("%d", &numeroDeTermos);

    double resultado = calcularSerie(numeroDeTermos);

    printf("O valor calculado da s�rie com %d termos �: %.10lf\n", numeroDeTermos, resultado);

    return 0;
}

