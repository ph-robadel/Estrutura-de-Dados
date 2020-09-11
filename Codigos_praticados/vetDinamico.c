#include <stdio.h>
#include <stdlib.h>

/* Vetore Dinâmico */

/*Adiciona vetores dinamicamente passado o tamanho do vetor*/
int* addVet(int);

/*Mostra o conteúdo do vetor*/
void showVet(int*,int);

/*O Usuário insere todos os dados do vetor */
void inserirDado(int*,int);


int main(){
	int *v, n; //vetor e tamanho
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n); // recebe do usuário 
	v = addVet(n);
	inserirDado(v,n);
	showVet(v,n);
	free(v);
	return 0;
}

// n representa o tamanho do vetor; vetor de tamanho n;

int* addVet(int n){
	int *vetor = NULL;
	vetor = (int*)(malloc(sizeof(int)*n));
	return vetor;
}
void showVet(int* vetor, int n){
	printf("Vetor: { ");
	for(int i = 0;i<n;i++) printf("[%d] ",vetor[i]);
	printf("}\n");
}

void inserirDado(int *vetor, int n){
	for(int i = 0; i<n; i++){
		printf("[%d]Digite um número inteiro: ",i);
		scanf("%d",&vetor[i]);
	}
}
