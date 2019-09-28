#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int campo[20][20]={{0}};
char bcampo[11][11];

int main(){
	
	int linha, colun;
	int qtdJo, i, j, m;
	int bombas;
	srand(time(NULL));

	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			campo[i][j] = rand() % 2;
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			bcampo[i][j] = '*';
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			printf("%c ",bcampo[i][j]);
		}
		printf("\n");
	}
	scanf("%d", &qtdJo);

	for (m = 0; m < qtdJo; m++)
	{
		bombas = 0;

		scanf("%d %d", &linha, &colun);	

		if(campo[linha][colun]==1)
		{
			printf("BUUUUM!\n");
			bcampo[linha][colun] = 'X';		
			for (i = 1; i <= 10; ++i)
			{
				for ( j = 1; j <= 10; ++j)
				{
					printf("%c ", bcampo[i][j]);
				}
			printf("\n");
			}
		break;
		}
		else
		{
			printf("Não há bomba\n")
			for (i = -1; i <= 1; ++i)
			{
				for (j = -1; j <= 1; ++j)
				{
					if (campo[linha-i][colun+j]==1)
						{
							bombas++;
						}
				}
			}
			printf("há %d bomba(s) por perto!\n", bombas);
		}
		char bo = bombas+'0';
		bcampo[linha][colun] = bo;
		system("clear");
		for (i = 1; i <= 10; ++i)
		{
			for ( j = 1; j <= 10; ++j)
			{
				printf("%c ", bcampo[i][j]);
			}
		printf("\n");
		}
	}
}

