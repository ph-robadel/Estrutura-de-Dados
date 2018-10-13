#include <stdio.h>
#include <stdlib.h>

typedef struct cliente{
    int id;
    char nome[81];
}Cliente;

int gerarIdCliente(){
    static int id = 1;
    return id++;
}

Cliente* criarCliente(){
    Cliente* novo = (Cliente*) malloc(sizeof(Cliente));
    if(novo != NULL){
        novo->id = gerarIdCliente();
        
        printf("Digite o nome do cliente: ");
        scanf("%80[^\n]",novo->nome);
        setbuf(stdin,NULL);
    }else
        printf("Não há espaço na memória para criar um novo cliente!\n");
    
    return novo;
}

void editarCliente(Cliente* c){
    printf("Digite o novo nome para \"%s\": ",c->nome);
    scanf("%80[^\n]",c->nome);
    setbuf(stdin,NULL);
}

void imprimirCliente(Cliente* c){
    printf("%d: %s\n",c->id,c->nome);
}
