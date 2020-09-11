#include <stdio.h>
#include <stdlib.h>
#include "Produto.h"

typedef struct noListaCDescritor {
	Produto info;
	struct noListaCDescritor* prox;
}NoListaCDescritor;

typedef struct descritor {
	NoListaCDescritor* prim;
	int n;
	NoListaCDescritor* ult;
}Descritor;

void criarListaCDescritor(Descritor* d){
	d->n = 0;
	d->prim = d->ult = NULL;
}

int estaVaziaCDescritor(Descritor* d){
	return(d->n==0);
}

void inserirOrdenadoCDescritor(Descritor* d, Produto v){
	NoListaCDescritor *p,*ant = NULL;
	for (p = d->prim; p!=NULL && p->info.id < v.id; p=p->prox)
		ant = p;
	NoListaCDescritor* novo = (NoListaCDescritor*) malloc(sizeof(NoListaCDescritor));
	if(novo!=NULL){
		novo->info = v;
		if(estaVaziaCDescritor(d)){
			novo->prox = NULL;
			d->prim = d->ult = novo;
		}else{
			novo->prox = p;
			ant->prox = novo;
		}

		printf("\"%s\" cadastrado com sucesso!\n",novo->info.nome);
		d->n++;
	}else
		printf("Não foi possivel cadastrar esse produto!");
}

void imprimirListaCDescritor(Descritor* d){
	if(estaVaziaCDescritor(d))
		printf("Não há Produtos cadastrados!!\n");
	else
		for(NoListaCDescritor* p = d->prim; p!=NULL; p=p->prox)
			imprimirProduto(&p->info);
}

NoListaCDescritor* buscarCDescritor(Descritor* d,int id){
	if(estaVaziaCDescritor(d)){
		printf("Está vazia!\n");
		return NULL;
	}
	else{
		NoListaCDescritor* p;
		for(p = d->prim;p!=NULL;p=p->prox)
			if(p->info.id == id)
				return p;
		printf("Nenhum Produto com id = %d\n",id);
		return NULL;
	}
}

void removerCDescritor(Descritor* d, int id){
	NoListaCDescritor *p,*ant = NULL;
	for (p = d->prim; p!= NULL && p->info.id < id; p=p->prox)
		ant = p;
	if(p==NULL)
		printf("Nenhum Produto com id = %d\n",id);
	else{
		if(ant==NULL)
			d->prim = p->prox;
		else
			ant->prox = p->prox;
		if(p == d->ult)
			d->ult = ant;
		printf("\"%s\" removido com sucesso!\n",p->info.nome);
		free(p);
		d->n--;
	}
}


void editarCDescritor(Descritor* d,int id){
	editarDescricaoProduto(&buscarCDescritor(d,id)->info);
}

void liberarCDescritor(Descritor* d){
	NoListaCDescritor* aux = NULL;
	for(NoListaCDescritor* p = d->prim; p!=NULL; p = aux){
		aux = p->prox;
		free(p);
	}
	criarListaCDescritor(d);
}
