#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[10], letra;
	printf("Digite um nome: ");
	scanf("%9[^\n]s", nome);
	setbuf(stdin,NULL);
	printf("Digite um caracter: ");
	scanf("%c",&letra);
	printf("String = %s\ncaracter = %c\n",nome,letra);
	setbuf(stdin,NULL);
	return 0;
}
