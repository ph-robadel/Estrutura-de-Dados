all: compila executa clean

compila: Cliente.o Produto.o ListaCDescritor.o ListaEncadeada.o main.o 
	gcc main.o Cliente.o Produto.o ListaCDescritor.o ListaEncadeada.o -o prog

main.o: main.c
	gcc -c main.c

Cliente.o: Cliente.c
	gcc -c Cliente.c

Produto.o: Produto.c
	gcc -c Produto.c

ListaCDescritor.o: ListaCDescritor.c
	gcc -c ListaCDescritor.c

ListaEncadeada.o: ListaEncadeada.c
	gcc -c ListaEncadeada.c

executa:
	./prog 
clean:
	rm -rf main.o Cliente.o Produto.o ListaCDescritor.o ListaEncadeada.o prog
	clear
