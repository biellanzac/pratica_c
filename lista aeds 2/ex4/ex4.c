#include <stdio.h>
#include <math.h>

int main(){
    float peso, altura, imc;

    printf("Informe o peso em kg: \n");
    scanf("%f", &peso);

    printf("Informe a altura em m: \n");
    scanf("%f", &altura);

    imc = peso/altura;

    if(imc < 16){
        printf("Hecticidade mórbida");
    } else if(imc >=16 && <=17) {
        printf("Hecticidade grave");
    } else if(imc >17 && =<18.5){
        printf("Abaixo do peso");
    } else {
        printf("aaa");
    }

    printf("%f", imc);
}
