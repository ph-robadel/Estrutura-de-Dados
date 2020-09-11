#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    int x; 
    int y;
}Ponto;

typedef struct circulo{
    Ponto p; 
    int raio;
}Circulo;


int main(){
    Circulo c;
    
    printf("Digite a cordenada x y e raio: \n");
    scanf("%d",&c.p.x);
    scanf("%d",&c.p.y);
    scanf("%d",&c.raio);
    
    printf("Coordenada x:%d y:%d raio:%d\n",c.p.x,c.p.y,c.raio);
    return 0;
}
