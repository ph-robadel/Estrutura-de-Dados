#include <stdio.h>
#include <stdlib.h>

int** criarMatriz(int m,int n){
	int** matriz = (int**) (malloc(m*sizeof(int*)));
	for(int i = 0; i<m; i++)
		matriz[i] = (int *) (malloc(n*sizeof(int)));
	return matriz;
} 

void inserirMatriz(int** matriz,int m,int n){
	int i,j;
	for(i=0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("Matriz [%d][%d] = ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
}

void exibirMatriz(int** matriz, int m, int n){
	int i,j;
	printf("\nMatriz %dx%d:\n",m,n);
	for(i=0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int** transposta(int **matriz, int m,int n){
	int **trans = criarMatriz(n,m);
	int i,j;	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			trans[j][i] = matriz[i][j]; 
		
	return trans;
}

void liberar(int **matriz,int m){
	for(int i = 0;i<m;i++)
		free(matriz[i]);
	free(matriz);
}

int main(){
	int **mat,**trans, m,n;
	printf("Digite o número de linha e coluna: \n");
	scanf("%d %d",&m,&n);

	mat = criarMatriz(m,n);
	inserirMatriz(mat,m,n);
	exibirMatriz(mat,m,n);

	trans = transposta(mat,m,n);
	exibirMatriz(trans,n,m);
	
	libera(mat,m);
	libera(trans,n);

	return 0;
}
