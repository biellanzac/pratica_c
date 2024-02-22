#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1; // É um palíndromo
}

int main() {
	int i, j;
    char frase[1000];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int len = strlen(frase);
    int start = 0;
    int end = 0;

    for ( i = 0; i < len; i++) {
        char c = tolower(frase[i]); 
        if (isalpha(c)) {
            end = i;
            if (i - start > 2) { 
                if (isPalindrome(frase, start, end)) {
                    printf("Palíndromo: ");
                    for ( j = start; j <= end; j++) {
                        putchar(frase[j]);
                    }
                    printf("\n");
                }
            }
        } else {
            start = i + 1; 
        }
    }

    return 0;
}

