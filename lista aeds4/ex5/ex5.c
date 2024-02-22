#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char strInvertida[100];
    int i;
    
    printf("Digite uma string: ");
    scanf("%s", str);

    int tamanho = strlen(str);

    for (i = 0; i < tamanho; i++) {
        strInvertida[i] = str[tamanho - i - 1];
    }
    strInvertida[tamanho] = '\0'; 
    
    if(str != strInvertida){
    	printf("� um pal�ndromo");
	} else{
		printf("Nao � um pal�ndromo");
	}
	
	return 0;

}


/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int i, j;
    int isPalindromo = 1;

    // Ler a palavra do usu�rio
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int len = strlen(palavra);

    for (i = 0, j = 0; i < len; i++) {
        if (isalpha(palavra[i])) {
            palavra[j] = tolower(palavra[i]);
            j++;
        }
    }
    palavra[j] = '\0';

    len = j;

    // Verificar se a palavra � um pal�ndromo
    for (i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - i - 1]) {
            isPalindromo = 0; // N�o � um pal�ndromo
            break;
        }
    }

    if (isPalindromo) {
        printf("A palavra � um pal�ndromo.\n");
    } else {
        printf("A palavra n�o � um pal�ndromo.\n");
    }

    return 0;
}

*/
