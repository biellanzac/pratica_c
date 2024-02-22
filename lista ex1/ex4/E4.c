#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    
    printf("Digite seu nome completo:\n");
    gets(nome);
    
    int caracteres = strlen(nome);
    
    printf("O nome tem %d caracteres", caracteres);

    return 0;
}

