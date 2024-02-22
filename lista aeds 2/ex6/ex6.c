#include <stdio.h>

int main(){
	int dia;
	
	printf("Digite um número de 1 a 7\n");
	scanf("%d", &dia);
	
	if(dia == 1){
		printf("Domingo");
	} else if(dia == 2){
		printf("Segunda Feira");
	} else if(dia == 3){
		printf("Terça Feira");
	} else if(dia == 4){
		printf("Quarta Feira");
	} else if(dia == 5){
		printf("Quinta Feira");
	} else if(dia == 6){
		printf("Sexta Feira");
	} else if(dia == 7){
		printf("Sabado");
	} else {
		printf("O numero digitado nao foi entre 1 e 7");
	}
	
	return 0;
	
}
