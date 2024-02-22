#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 0;
    int numero[10];
    int i;
    int tamanho = sizeof(numero) / sizeof(numero[0]);

    do {
        printf("Digite um número natural (0 para encerrar): ");
        scanf("%d", &numero[i]);

        if (&numero[i] != 0) {
            soma += &numero[i];
            contador++;
        }
    } while (&numero[i] != 0);

    if (contador == 0) {
        printf("Nenhum número foi fornecido.\n");
    } else {
        double media = (double)soma / contador;
        printf("A média dos números fornecidos é: %.2lf\n", media);
    }
    
    printf("%i", tamanho);

    return 0;
}

