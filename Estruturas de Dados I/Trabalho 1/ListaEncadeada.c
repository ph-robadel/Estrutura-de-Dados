#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cliente.h"

typedef struct nolistaEncadeada{
    Cliente info;
    struct nolistaEncadeada* prox;
}NoListaEncadeada;

void criarListaEncadeada(NoListaEncadeada**l){
    *l = NULL;
}

int estaVaziaEncadeada(NoListaEncadeada** l){
    return (*l==NULL);
}


void inserirOrdenadoEncadeada(NoListaEncadeada**l, Cliente v){
    NoListaEncadeada *p, *ant = NULL;
    for(p = *l; (p!=NULL) && (strcmp(p->info.nome,v.nome) < 0); p = p->prox)
        ant = p;
    NoListaEncadeada *novo = (NoListaEncadeada*)(malloc(sizeof(NoListaEncadeada)));
    if(novo!=NULL){
        novo->info = v;
        novo->prox = p;
        if(ant == NULL)
            *l = novo;
        else
            ant->prox = novo;
        printf("%s cadastrado com sucesso!\n",novo->info.nome);
    }else
        printf("Não foi possível cadastrar Cliente!\n");
}

void imprimirListaEncadeada(NoListaEncadeada**l){
    if(estaVaziaEncadeada(l))
         printf("Esta Lista Está Vazia!\n");
    else
        for(NoListaEncadeada* p = *l; p != NULL; p = p->prox)
            imprimirCliente(&p->info);
}

NoListaEncadeada* buscarEncadeada(NoListaEncadeada** l, char* nome){
    if(!estaVaziaEncadeada(l)){
        for(NoListaEncadeada* p= *l; p != NULL; p = p->prox){
            if(strcmp(p->info.nome,nome) == 0){
                printf("Encontrado!\n");
                return p;
            }
        }
        printf("Não foi encontrado!\n");
    }else
        printf("Não encontrado! (Lista Está Vazia)\n");
    
    return NULL;  
}

void removerEncadeada(NoListaEncadeada**l, char* nome){
    NoListaEncadeada *p, *ant = NULL;
    for(p = *l; p!=NULL && strcmp(p->info.nome,nome) != 0; p=p->prox)
        ant = p;
    if(p==NULL)
        printf("Não encontrado!\n");
    else{
        if(ant == NULL)
            *l = p->prox;
        else
            ant->prox = p->prox;
        printf("\"%s\" Removido com sucesso!\n",p->info.nome);
        free(p);
    }
}

void liberarListaEncadeada(NoListaEncadeada** l){
    NoListaEncadeada *p, *temp;
    for(p=*l; p != NULL; p = temp){
        temp = p->prox;
        free(p);    
    }
    *l = NULL;
}
