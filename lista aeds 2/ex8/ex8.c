#include <stdio.h>

int main() {
    double salarioBruto;
    double deducaoINSS = 0.0;
    double deducaoIPRF = 0.0;
    double baseCalculoIPRF = 0.0;

    printf("Digite o valor do salário bruto: R$ ");
    scanf("%lf", &salarioBruto);

    if (salarioBruto <= 2112.00) {
        deducaoINSS = salarioBruto * 0.075;
    } else if (salarioBruto <= 2826.65) {
        deducaoINSS = salarioBruto * 0.09;
    } else if (salarioBruto <= 3751.05) {
        deducaoINSS = salarioBruto * 0.12;
    } else if (salarioBruto <= 4664.68) {
        deducaoINSS = salarioBruto * 0.14;
    } else {
        deducaoINSS = 4664.68 * 0.14;
    }

    if (salarioBruto > 2112.00) {
        baseCalculoIPRF = salarioBruto - deducaoINSS - 2112.00;
    }

    if (baseCalculoIPRF > 0) {
        if (baseCalculoIPRF <= 2826.65) {
            deducaoIPRF = baseCalculoIPRF * 0.075;
        } else if (baseCalculoIPRF <= 3751.05) {
            deducaoIPRF = baseCalculoIPRF * 0.15;
        } else if (baseCalculoIPRF <= 4664.68) {
            deducaoIPRF = baseCalculoIPRF * 0.225;
        } else {
            deducaoIPRF = baseCalculoIPRF * 0.275;
        }
    }

    printf("Dedução do INSS: R$ %.2lf\n", deducaoINSS);
    printf("Dedução do IPRF: R$ %.2lf\n", deducaoIPRF);

    return 0;
}

