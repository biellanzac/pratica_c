#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 16){
        printf("Voce nao pode votar");
    } else if(idade > 16 && idade <18){
        printf("Seu voto � facultativo");
    } else if(idade >= 18 && idade <64){
        printf("Seu voto � obrigat�rio");
    } else if (idade > 64){
        printf("Seu voto � facultativo");
    }
    return 0;
}
