#include <stdio.h>

int main() {
    int n;
    printf("Digite o n�mero de termos da sequ�ncia de Fibonacci: ");
    scanf("%d", &n);

    int primeiro = 0;
    int segundo = 1;

    printf("Sequ�ncia de Fibonacci com %d termos:\n", n);

    if (n >= 1) {
        printf("%d ", primeiro);
    }
    if (n >= 2) {
        printf("%d ", segundo);
    }

    for (int i = 3; i <= n; i++) {
        int proximo = primeiro + segundo;
        printf("%d ", proximo);
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}
