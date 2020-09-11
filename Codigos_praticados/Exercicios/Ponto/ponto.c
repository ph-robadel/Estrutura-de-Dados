#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    int x;
    int y;
}Ponto;

void lerPonto(Ponto* p){
    printf("Digite a cordenada do ponto:\n");
    scanf("%d",&p->x);
    scanf("%d",&p->y);
}

void imprimirPonto(Ponto* p){
    printf("(%d,%d)\n",p->x,p->y);
}
