#include <stdio.h>
#include <stdlib.h>


typedef struct produto{
    int id;
    char nome[81];
    char descricao[101];
    int quantidade;
}Produto;

int gerarIdProduto(){
    static int id = 1;
    return id++;
}

Produto* criarProduto(){
    Produto* novo = (Produto*) malloc(sizeof(Produto));
    if(novo !=NULL){
        novo->id = gerarIdProduto();
        setbuf(stdin,NULL);

        printf("Digite o nome do produto: ");
        scanf("%80[^\n]",novo->nome);
        setbuf(stdin,NULL);


        printf("Digite descricao do produto: ");
        scanf("%100[^\n]",novo->descricao);
        setbuf(stdin,NULL);

        printf("Digite quantidade do produto: ");
        scanf("%d",&novo->quantidade);
        setbuf(stdin,NULL);
    }else
        printf("Não há espaço na memória para criar um novo produto!\n");

    return novo;
}

void imprimirProduto(Produto* p){
    printf("%d: %s - %s. Qtde:%d\n",p->id,p->nome,p->descricao,p->quantidade);
}

void editarDescricaoProduto(Produto* p){
    setbuf(stdin,NULL);
    printf("Digite uma nova descricao para \"%s\": ",p->nome);
    scanf("%100[^\n]",p->descricao);
    setbuf(stdin,NULL);
    printf("Editado com sucesso!\n");
}


void venderProduto(Produto* p, int qtd){
    if((qtd > p->quantidade) || (qtd <= 0))
        printf("Venda não realizada!\nNão há essa quantidade em estoque ou a quantidade informada é inválida.\n");
    else{
        p->quantidade -= qtd;
        printf("Venda realizada com sucesso!\n");
    }
}
