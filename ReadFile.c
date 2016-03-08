/*
 ============================================================================
 Name        : ReadFile.c
 Author      : Me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *file;
	// cria o arquivo- se não tem o path cria no mesmo local que onde esta rodando o executavel	
	file = fopen("dados.txt","w");

	if (file == NULL) {
		printf("Sem dados de leitura \n");
		exit (EXIT_FAILURE);
	}

	fclose(file);

	return EXIT_SUCCESS;
}
