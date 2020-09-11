#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"
#include "ListaCDescritor.h"

void imprimirMenu(){
    printf("------------- MENU --------------\n");
    printf("1 - Cadastrar novo cliente\n");
    printf("2 - Remover cliente\n");
    printf("3 - imprimir clientes\n");
    printf("4 - Cadastrar novo produto\n");
    printf("5 - Remover produto\n");
    printf("6 - Imprimir produtos\n");
    printf("7 - Editar descrição de produtos\n");
    printf("8 - Registrar venda de produtos\n");
    printf("9 - Sair\n");
    printf("---------------------------------\n");
}

int main(){
    Descritor listaProduto;
    criarListaCDescritor(&listaProduto);

    NoListaEncadeada* listaCliente;
    criarListaEncadeada(&listaCliente);

    int op = 0;
    int idBusca;
    int qtd;
    char nomeBusca[81];
    NoListaCDescritor* noBusca;
    char confirmar;
    do{
        printf("\e[H\e[2J");//LIMPAR TELA
        imprimirMenu();
        printf("Digite uma opção: ");
        setbuf(stdin,NULL);
        scanf("%d",&op);
        setbuf(stdin,NULL);
        printf("\n");
        switch(op){
            case 1:
                inserirOrdenadoEncadeada(&listaCliente,*criarCliente());
                break;
            case 2:
                printf("Digite o nome do cliente para remover: ");
                scanf("%80[^\n]",nomeBusca);
                setbuf(stdin,NULL);
                removerEncadeada(&listaCliente,nomeBusca);
                break;
            case 3:
                imprimirListaEncadeada(&listaCliente);
                break;
            case 4:
                inserirOrdenadoCDescritor(&listaProduto,*criarProduto());
                break;
            case 5:
                printf("Digite o id do produto: ");
                scanf("%d",&idBusca);
                setbuf(stdin,NULL);
                removerCDescritor(&listaProduto, idBusca);
                break;
            case 6:
                imprimirListaCDescritor(&listaProduto);
                break;
            case 7:
                printf("Digite o id do produto: ");
                scanf("%d",&idBusca);
                setbuf(stdin,NULL);
                noBusca = buscarCDescritor(&listaProduto,idBusca);
                if(noBusca!=NULL)
                    editarDescricaoProduto(&noBusca->info);
                break;
            case 8:
                printf("Digite o id do produto: ");
                scanf("%d",&idBusca);
                setbuf(stdin,NULL);
                noBusca = buscarCDescritor(&listaProduto,idBusca);
                if(noBusca!=NULL){
                    printf("Digite a quantidade de \'%s\' a ser vendida: ",noBusca->info.nome);
                    scanf("%d",&qtd);
                    setbuf(stdin,NULL);
                    venderProduto(&noBusca->info,qtd);
                    imprimirProduto(&noBusca->info);
                }
                break;
            case 9:
                liberarListaEncadeada(&listaCliente);
                liberarCDescritor(&listaProduto);
                printf("Sistema finalizado!\n");
                break;
            default:
                printf("Não há opções para %d\n",op);
                break;
        }
        //scanf apenas para o usuário conseguir ver as informações 
        //e depois apertar enter e "voltar" ao menu.
        scanf("%1[^\n]",&confirmar);
    }while(op!=9);
	return 0;
}
