/% Faça um programa que receba uma frase com letras minúsculas e 
  converta a primeira letra de cada palavra para maiúscula. %/

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
	char frase[50];
	int tamanho, i;
	
	printf("Entre com uma frase:\n");
	scanf ("%[^\n]", frase);

  //Converte todos os caracteres da frase para minúsculo
	strlwr(frase);
	tamanho = strlen(frase);

  //Verificar o primeiro caractere da frase
	if (frase[0]!= '\0'  || frase[0]!= ' ')
		frase[0]=toupper(frase[0]);
	
	for (i=1; i<tamanho; i++) {
		if (frase[i]==' ') {
		    while (frase[i+1] == ' ')
		       i = i+1;
		    frase[i+1]=toupper(frase[i+1]);
		}	
	}
	printf("\nNova frase = %s", frase);
	return 0;
}

