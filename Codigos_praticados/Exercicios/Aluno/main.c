#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"
#define N 3

int main(){
    Aluno* vet[N];
    inicializa(N,vet);
    leAluno(N,vet,0);
    leAluno(N,vet,2);
    imprimeAluno(N,vet,2);
    imprime_tudo(N,vet);
    retiraAluno(vet,0);
    imprime_tudo(N,vet);    
    
    return 0;
}
