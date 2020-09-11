#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[81];
    int matricula;
}Aluno;

// atribui NULL a todos os elementos do vetor de alunos de tamanho n
void inicializa (int n, Aluno** tab){
    printf("Estrutura inicializada!\n");
    for(int i =0; i<n; i++)
        tab[i] = NULL;
}

// armazena os dados de um novo aluno em uma posição i do vetor de tamanho n
void leAluno (int n, Aluno** tab, int i){
    if(i>=0 && i<n){
        if(tab[i]==NULL){
            setbuf(stdin,NULL);
            tab[i] = (Aluno*)(malloc(sizeof(Aluno)));
            printf("## Add aluno %d ##\n",i+1);
            printf("Digite o nome do Aluno: ");
            scanf("%80[^\n]",tab[i]->nome);
            setbuf(stdin,NULL);
            printf("Digite a matricula do Aluno: ");
            scanf("%d",&tab[i]->matricula);
            printf("Aluno \"%s\" Salvo com sucesso!!!\n", tab[i]->nome);
        }else{
            printf("Já possui aluno nesta posição!\n");
        }
    }else{
        printf("indice inválido!\n");
    }
}

// imprime os dados de um aluno armazenado em uma posição i do vetor
void imprimeAluno(int n, Aluno** tab, int i){
    if(i>=0 && i<n){
        if(tab[i]!=NULL){
            printf("\nAluno %d\nAluno: %s\nMatricula: %d\n",i+1,tab[i]->nome,tab[i]->matricula);
        }
    }
}

// remove os dados de um aluno. A posição i do aluno é passada como parâmetro
void retiraAluno(Aluno** tab, int i){
    tab[i]=NULL;
    free(tab[i]);
    printf("Aluno %d removido!\n",i+1);
}

// imprime os dados de todos os alunos armazenados na tabela
void imprime_tudo(int n, Aluno** tab){
    printf("## Todos os Alunos ##\n");
    for(int i = 0; i<n; i++){
        imprimeAluno(n,tab,i);
    }
}
