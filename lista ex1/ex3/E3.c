#include <stdio.h>
#include <math.h>

int main(){
	double cateto1, cateto2, hipotenusa1, hipotenusa2, area, perimetro, angulo, raiz;
	
	printf("Digite o valor do cateto 1:");
	scanf("%lf", &cateto1);
	printf("Digite o valor do cateto 2:");
	scanf("%lf", &cateto2);
	
	//hipotenusa
	hipotenusa1 = cateto1*cateto1 + cateto2*cateto2;
	hipotenusa2 = sqrt(hipotenusa1);
	
	//area
	area = (cateto1*cateto2)/2;
	
	//perimetro
	perimetro = cateto1+cateto2+hipotenusa2;
	
	//angulo (chat gpt)
	angulo = atan(cateto1 / cateto2);
	angulo = angulo * 180.0 / M_PI;
	
	printf("O valor da hipotenusa é:%lf\n", hipotenusa2);
	printf("O valor da area e: %lf\n", area);
	printf("O valor do perimetro e: %lf\n", perimetro);
	printf("O valor do ângulo e:%lf", angulo);
	
	return 0;
}
