#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
	char nome[80];
	int matricula;
} Aluno;

void inicializa(int n, Aluno **tab){
	for(int i = 0; i<n ; i++){
		tab[i] = NULL;
	}
}

int main(){
	Aluno *tab[3];
	inicializa(3,tab);
}
