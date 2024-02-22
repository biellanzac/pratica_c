#include <stdio.h>

int main(){
	int vetor[10];
	int aux;
	int i, x, y;
	
	for(i= 0; i<10; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
	}
	
	for(x=0; x<10; x++){
		for(y=x; y<10; y++){
			if(vetor[x] > vetor[y]){
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
	
	for(i=0; i<10; i++){
		printf("O numero %d é: %d\n", i, vetor[i]);
	}
	
}
