/% Faça um programa que receba uma palavra e verifique se constitui um palíndromo, 
   ou seja, a palavra escrita do fim para o começo fica igual à palavra escrita do começo para o fim. 
   (ignorar maiúsculas e espaços).  Obs: Não usar a função strrev(). */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

	char palavra[20];
	int tamanho_palavra, i, contador = 0;
	char ehPalindromo = 'S';
	
	printf("Entre com uma palavra:\n");
	scanf (" %s", palavra);
	
	tamanho_palavra = strlen(palavra);

	strlwr(palavra);
	
  while (contador < tamanho_palavra/2) {
    	if (palavra[contador]!= palavra[tamanho_palavra - 1 - contador])
       		ehPalindromo = 'N';	
    	contador++;
	}
	
	if (ehPalindromo == 'S')
		printf("\nA palavra %s é palindromo", palavra);
	else
		printf("\nA palavra %s é não é um palindromo", palavra);
	return 0;
}
