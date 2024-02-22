#include <stdio.h>

int main() {
    int r, g, b;

    printf("Digite o valor para a cor vermelha (0-255): ");
    scanf("%d", &r);
    
    printf("Digite o valor para a cor verde (0-255): ");
    scanf("%d", &g);

    printf("Digite o valor para a cor azul (0-255): ");
    scanf("%d", &b);

    printf("Valores RGB em hexadecimal: #%02X%02X%02X\n", r, g, b);

    return 0;
}

