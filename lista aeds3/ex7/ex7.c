#include <stdio.h>

int main() {
    int num;
    int cont1_25 = 0, cont26_50 = 0, cont51_75 = 0, cont76_100 = 0, total = 0;

    while (1) {
        printf("Digite um número inteiro entre 1 e 100 (ou 0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break; 
        }

        if (num < 1 || num > 100) {
            printf("Valor fora do intervalo permitido. Tente novamente.\n");
            continue; 
        }

        total++; 

        if (num >= 1 && num <= 25) {
            cont1_25++;
        } else if (num >= 26 && num <= 50) {
            cont26_50++;
        } else if (num >= 51 && num <= 75) {
            cont51_75++;
        } else if (num >= 76 && num <= 100) {
            cont76_100++;
        }
    }

    
    double percent1_25 = (double)cont1_25 / total * 100;
    double percent26_50 = (double)cont26_50 / total * 100;
    double percent51_75 = (double)cont51_75 / total * 100;
    double percent76_100 = (double)cont76_100 / total * 100;

    printf("Porcentagem de valores entre [1..25]: %.2lf%%\n", percent1_25);
    printf("Porcentagem de valores entre [26..50]: %.2lf%%\n", percent26_50);
    printf("Porcentagem de valores entre [51..75]: %.2lf%%\n", percent51_75);
    printf("Porcentagem de valores entre [76..100]: %.2lf%%\n", percent76_100);

    return 0;
}

