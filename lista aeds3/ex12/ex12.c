#include <stdio.h>
#include <math.h>

int main() {
    double valorImovel, entrada, jurosAnuais, valorParcela;
    int numMeses;

    printf("Digite o valor do imóvel (R$): ");
    scanf("%lf", &valorImovel);

    if (valorImovel <= 100000.0) {
        printf("O valor do imóvel deve ser superior a R$ 100.000,00.\n");
        return 1;
    }

    printf("Digite o valor da entrada (R$): ");
    scanf("%lf", &entrada);

    if (entrada < (0.2 * valorImovel) || entrada > (0.75 * valorImovel)) {
        printf("A entrada deve estar entre 20%% e 75%% do valor total do imóvel.\n");
        return 1;
    }

    printf("Digite o número de meses para o financiamento (60 a 360 meses): ");
    scanf("%d", &numMeses);

    if (numMeses < 60 || numMeses > 360) {
        printf("O número de meses para o financiamento deve estar entre 60 e 360 meses.\n");
        return 1;
    }

    jurosAnuais = 0.10;  

    double saldoDevedor = valorImovel - entrada;
    double jurosMensais = (jurosAnuais / 12.0);
    double amortizacao = saldoDevedor / numMeses;

    valorParcela = amortizacao + (saldoDevedor * jurosMensais);

    printf("O valor da primeira prestação é: R$ %.2lf\n", valorParcela);

    double valorTotalPago = entrada + (valorParcela * numMeses);

    printf("O valor total pago no final do financiamento é: R$ %.2lf\n", valorTotalPago);

    return 0;
}

