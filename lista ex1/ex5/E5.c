#include <stdio.h>
#include <stdlib.h>

int main() {
    char hexColor[7]; 
    int r, g, b;      

    printf("Digite um código de cor hexadecimal (RRGGBB): ");
    scanf("%6s", hexColor); 

    
    r = strtol(hexColor, NULL, 16); 
    g = strtol(hexColor + 2, NULL, 16); 
    b = strtol(hexColor + 4, NULL, 16); 

    if (r >= 0 && r <= 255 && g >= 0 && g <= 255 && b >= 0 && b <= 255) {
        printf("Valores RGB: (%d, %d, %d)\n", r, g, b);
    } else {
        printf("Código de cor hexadecimal inválido.\n");
    }

    return 0;
}

