#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro vetor (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do segundo vetor (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double dotProduct = x1 * x2 + y1 * y2;

    double magnitude1 = sqrt(x1 * x1 + y1 * y1);
    double magnitude2 = sqrt(x2 * x2 + y2 * y2);

    double cosTheta = dotProduct / (magnitude1 * magnitude2);
    double theta = acos(cosTheta) * (180.0 / M_PI); 

    double crossProduct = x1 * y2 - x2 * y1;

    printf("Produto Escalar: %.2lf\n", dotProduct);
    printf("Ângulo entre os Vetores: %.2lf graus\n", theta);
    printf("Produto Vetorial: %.2lf\n", crossProduct);

    return 0;
}

