typedef struct produto{int id;char nome[81];char descricao[101];int quantidade;}Produto;

int gerarIdProduto();

Produto* criarProduto();

void imprimirProduto(Produto* p);

void editarDescricaoProduto(Produto* p);

void venderProduto(Produto*, int);
