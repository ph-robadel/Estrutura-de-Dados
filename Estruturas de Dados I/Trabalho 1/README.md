Descrição do Trabalho:

Você foi contratado para implementar um sistema de controle para uma loja. A sua primeira tarefa será implementar algumas funcionalidades isoladas do programa que permitam cadastrar e manipular os dados de clientes e produtos. No seu programa você deve implementar os TAD Cliente e Produto, bem como uma lista simplesmente encadeada de clientes e uma lista com descritor de produtos. Assim, o seu projeto deve conter pelo menos os seguintes arquivos: Cliente.h, Cliente.c, Produto.h, Produto.c, ListaEncadeada.h, ListaEncadeada.c, ListaCDescritor.h, ListaCDescritor.c, main.c e makefile.

Um cliente possui um identificador único (deve ser gerado automaticamente) e nome. Um produto possui um identificador único (deve ser gerado automaticamente), nome, descrição e quantidade em estoque.  Na implementação dos TAD correspondentes, você deve incluir pelo menos as funções para criação, edição e impressão de um cliente e de um produto.
Ex: protótipo da função criar cliente: Cliente* criarCliente();

O seu programa principal deve manter as listas de clientes e de produtos. O campo info do nó da lista deve ser uma estrutura do tipo correspondente e as funções devem receber essa estrutura. 
Ex: protótipo da função insere na lista encadeada: void insereOrdenado(NoLista** l,Cliente v);

A lista de clientes deve ser mantida ordenada pelo nome do cliente e a lista de produtos deve ser mantida ordenada pelo seu identificador único.

As alterações das listas estudadas em sala de aula para atender a especificação do trabalho são de 
responsabilidade dos alunos.Implemente sua função principal (main) no arquivo main.c. Ela deve criar a lista de clientes e a lista de produtos e, em seguida, imprimir na tela um menu com as seguintes opções:
----------------MENU------------------
1 - Cadastrar novo cliente
2 - Remover cliente
3 - Imprimir clientes
4 - Cadastrar novo produto
5 - Remover produto
6 - Imprimir produtos
7 - Editar descrição de produtos
8 - Registrar venda de produto
9 - Sair
Escolha uma opção:
-------------------------------------------
Implemente todas as funcionalidades do menu, levando em conta as seguintes considerações:

Para cadastrar novo cliente e novo produto, deve-se criar as estruturas correspondentes e inserir na lista correspondente.

A busca de um cliente deve ser feita pelo nome (na opção 2).

A busca de um produto deve ser feita pelo identificador único (tanto na opção 5, quanto nas opções 7 e 8).

A impressão dos clientes deve ser feita da seguinte forma: id do cliente: nome do cliente (ou seja, um cliente por linha).Ex:
1: André Campos
2: Maria José

A impressão dos produtos deve ser feita da seguinte forma -> "id do produto:  nome do produto - Descrição do produto. Qtde em estoque: x" (um por linha)Ex:
1: Agenda 2019 - Agenda da marca BBI um dia/pag. Qtde: 10
2: Caderno 60fl – Caderno brochura 60 fl. Qtde: 200
       
Na opção 8, além do identificador do produto, deve-se solicitar o número de unidades vendidas e atualizar a quantidade do produto em estoque. Ao finalizar, imprimir o produto correspondente com esse novo valor
