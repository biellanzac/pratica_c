#include <stdio.h>

int main(){
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if(numero%2 == 0){
        printf("O numero é divisivel por 2");
    } else if(numero%3 == 0){
        printf("O numero é divisível por 3");
    } else if(numero%5 == 0){
        printf("O numero é divisível por 5");
    } else if(numero%10 == 0){
        printf("O numero é divisível por 10");
    } else {
        printf("O numero nao é divisivel por 2, 3, 5, e 10");
    }
    return 0;
}
