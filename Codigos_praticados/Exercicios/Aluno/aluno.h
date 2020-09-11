#include <stdio.h>
#include <stdlib.h>

typedef struct aluno Aluno;

// atribui NULL a todos os elementos do vetor de alunos de tamanho n
void inicializa (int,Aluno**);

// armazena os dados de um novo aluno em uma posição i do vetor de tamanho n
void leAluno (int,Aluno**,int);

// imprime os dados de um aluno armazenado em uma posição i do vetor
void imprimeAluno(int,Aluno**,int);

// remove os dados de um aluno. A posição i do aluno é passada como parâmetro
void retiraAluno(Aluno**,int);

// imprime os dados de todos os alunos armazenados na tabela
void imprime_tudo(int,Aluno**);
