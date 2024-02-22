#include <stdio.h>
#include <math.h>

int main(){
	double base, altura, volume, areas;
	
	printf("Calculo da area de piramide:\n");
	
	printf("Digite o valor da base: ");
    scanf("%lf", &base);
	
	printf("Digite o valor da altura: ");
    scanf("%lf", &altura);
	
	volume = (1.0/3.0)*base*altura;
	areas = base+2.0*(sqrt((base/4.0)+(altura*altura)));
	
	printf("O volume da piramide é: %lf\n",volume);
	printf("A area superficial é: %lf",areas);
	
	return 0;
}

