#include <stdio.h>
#include <stdlib.h>

float media(int*, int);
void toStringVetor(int*,int);

int main(){
	int* vetor = (int *)(malloc(10*sizeof(int)));
	if(vetor != NULL){
		for(int i = 0; i<10; i ++){
			printf("Digite um número inteiro [%d]: ",i);
			scanf("%d",&vetor[i]);
		}
		toStringVetor(vetor,10);
		printf("Média dos números: %.2f\n",media(vetor,10));
	}
	free(vetor);
	return 0;
}

float media(int *vetor, int n){
	float soma = 0;
	int i;
	for(i=0;i<n;i++) soma += vetor[i];
	return soma/n;
}

void toStringVetor(int *v,int n){
	printf("Vetor{");
	for(int i=0;i<n;i++) printf("[%d] ",v[i]);
	printf("}\n");
}
