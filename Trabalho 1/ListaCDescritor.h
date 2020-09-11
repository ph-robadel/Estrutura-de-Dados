#include "Produto.h"

typedef struct noListaCDescritor {Produto info;struct noListaCDescritor* prox;}NoListaCDescritor;

typedef struct descritor{NoListaCDescritor* prim;int n;NoListaCDescritor* ult;}Descritor;

void criarListaCDescritor(Descritor*);

int estaVaziaCDescritor(Descritor*);

void inserirOrdenadoCDescritor(Descritor*, Produto);

void imprimirListaCDescritor(Descritor*);

NoListaCDescritor* buscarCDescritor(Descritor*,int);

void removerCDescritor(Descritor*, int);

void editarCDescritor(Descritor*,int);

void liberarCDescritor(Descritor*);
