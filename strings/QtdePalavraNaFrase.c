% Faça um programa que receba uma frase e uma palavra, 
  calcule e mostre a quantidade de vezes que a palavra digitada aparece na frase. */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	char *psResultado;
	char frase[50];
	char palavra[20];
	int tamanho_frase, tamanho_palavra, i, contador = 0;
	
	printf("Entre com uma frase:\n");
	scanf ("%[^\n]", frase);

	printf("Entre com uma palavra:\n");
	scanf (" %s", palavra);

	psResultado = frase;
	
	printf("\nEndereço em decimal da frase %s = %d", frase, frase);
	
  psResultado = strstr(psResultado, palavra);
  while (psResultado != NULL) {
    	printf("\nPrimeira ocorrência em %d", psResultado);
      	contador ++;
    	psResultado += strlen(palavra);
     	psResultado = strstr(psResultado, palavra);
	}
	printf("\nA frase %s contém %d ocorrências da palavra %s", frase, contador, palavra);
	return 0;
}
