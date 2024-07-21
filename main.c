// Cabeçalho
//inicialização (srand (time(0))) numeros aleatorios
// Malloc alocação de memoria
//calculo das pistas 
// Gerar possiveis soluçõe
// Exibição dos resultados 
// Free liberar memoria 
// tratar erros



#include <stdio.h>

#define TAMANHO 4 // 16 numeros {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}}

int main ()
{//start inicio 
	srand(time(0)); //(srand (time(0))) +- matriz ciclica mais ja com biblioteca 

	int (*grade)[TAMANHO] = malloc (TAMANHO *TAMANHO * sizeof(int));
	if (grade == NULL || dica == NULL)
	{
		fprintf(stderr, "Falha na alocação de memoria\n");
			return 1;
	}

	//agora vamos colocar os 16 numeros nos da forma que a gente quer que apareça 
	int dica_up[TAMANHO] = {2, 1, 3, 2}; // esse é a parte que o exercicio pee cl1 up cl 2 up  ...
	int dica_dow[TAMANHO] = {3, 2, 1, 4};
	int dica_left[TAMANHO] = {1, 2, 3, 4};
	int dica_right[TAMANHO] = {4, 3, 2, 1};

	int i = 0 
	while (i < [TAMANHO]){// o de cima mostra como queremos esse diz a onde queremos cada
		dica[0][i] = dica_up[i];
		dica[1][i] = dica_down[i];
		dica[2][i] = dica_left[i];
		dica[3][i] = dica_right[i];

		i++
	}

	int numeros[TAMANHO] [TAMANHO] =
	{
		{{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}}
	} 
	//Agora vamos tentar preencher essa grade 
	int i = 0;
	while (i < TAMANHO){
		int j = 0; 
		while (j < TAMANHO){
			grade[i][j] = numeros[i][j];
		}
		i++;
	}


}