#include <stdio.h>
#include <stdlib.h>

/*Fibonacci NÃO recursivo*/
int fiboNR(int n){
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else {
		int n0 = 0,n1 = 1, aux;
		for(int i = 0; i < n-1; i++){
			aux = n1;
			n1 += n0;
			n0 = aux;	
		}
		return n1;
	}
}

/*Fibonacci recursivo*/
int fiboR(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else{
		return fiboR(n-1)+fiboR(n-2);
	}
}

int main(){
	int n;
	printf("Digite um número natural: ");
	scanf("%d", &n);
	
	printf("%d° termo da sequência = %d\n",n,fiboNR(n));
	printf("%d° termo da sequência = %d\n",n,fiboR(n));
	return 0;
}
