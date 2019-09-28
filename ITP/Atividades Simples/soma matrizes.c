#include <stdio.h>

#define LATAM 3

int main()
{
	//Definir Matrizes
	int mat1[LATAM][LATAM] = {{0}};
	int mat2[LATAM][LATAM] = {{0}};
	int resultado[LATAM][LATAM] = {{0}};

	int i, j;
	//leitura
	printf("Digite a primeira a matriz\n");

	for ( i = 0; i < LATAM; ++i)
	{
		for ( j = 0; j < LATAM; ++j)
		{
			scanf("%d", &mat1[i][j]);
		}
	}

	printf("Digite a segunda matriz\n");

	for ( i = 0; i < LATAM; ++i)
	{
		for ( j = 0; j < LATAM; ++j)
		{
			scanf("%d", &mat2[i][j]);
		}
	}


	//operação soma de matrizes
	for ( i = 0; i < LATAM; ++i)
	{
		for ( j = 0; j < LATAM; ++j)
		{
			resultado[i][j] = mat1[i][j] + mat2[i][j];
		}
	}

	//escrita
	for ( i = 0; i < LATAM; ++i)
	{
		for ( j = 0; j < LATAM; ++j)
		{
			printf("%d ", resultado[i][j]);
		}
		printf("\n");
	}

	return 0;
}