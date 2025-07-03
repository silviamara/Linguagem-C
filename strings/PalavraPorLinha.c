/* Faça um programa que receba uma frase e mostre cada palavra 
   dela em uma linha separada  */
  
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
  
	char frase[50];
	int tamanho, i;
	
	printf("Entre com uma frase:\n");
	scanf ("%[^\n]", frase);
	
	strlwr(frase);
	tamanho = strlen(frase);
	
	for (i=0; i<tamanho; i++) {
		if (frase[i]==' ') {
		    while (frase[i+1] == ' ')  //Enquanto houver espaço, incrementa o índice
		       i = i+1;
		    frase[i]='\n';   //Substitui o espaço por uma nova linha
		}	
	}
	printf("\nNova frase = \n%s", frase);
	return 0;
}
