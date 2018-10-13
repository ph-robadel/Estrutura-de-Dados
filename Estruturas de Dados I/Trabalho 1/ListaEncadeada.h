#include "Cliente.h"

typedef struct nolistaEncadeada{Cliente info;struct nolistaEncadeada* prox;}NoListaEncadeada;

void criarListaEncadeada(NoListaEncadeada**);

int estaVaziaEncadeada(NoListaEncadeada**);

void inserirOrdenadoEncadeada(NoListaEncadeada**, Cliente);

void imprimirListaEncadeada(NoListaEncadeada**);

NoListaEncadeada* buscarEncadeada(NoListaEncadeada**, char*);

void removerEncadeada(NoListaEncadeada**, char*);

void liberarListaEncadeada(NoListaEncadeada**);
