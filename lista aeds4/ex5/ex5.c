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
    	printf("É um palíndromo");
	} else{
		printf("Nao é um palíndromo");
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

    // Ler a palavra do usuário
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

    // Verificar se a palavra é um palíndromo
    for (i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - i - 1]) {
            isPalindromo = 0; // Não é um palíndromo
            break;
        }
    }

    if (isPalindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}

*/
