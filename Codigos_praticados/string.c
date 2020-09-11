#include <stdio.h>
#include <stdlib.h>

char maiusculo(char c){
	if(c>='a' && c<='z')
		 c-=32;
	return c;
}

int main(){
	char letra;
	printf("Digite uma letra minuscula: ");
	scanf("%c", &letra);
	printf("Resultado = %c\n", maiusculo(letra));
	return 0;
}
