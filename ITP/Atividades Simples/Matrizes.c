#include <stdio.h>

int main()
{	
	int linha, colum, bi,lin = 0, col = 0, contro, contro2;
	int i, j;
	scanf("%d %d", &linha, &colum);
	int matriz[linha][colum];
	int maiorLin[linha] = {0};
	int maiorCol[colum] = {0};

	contro = contro2 = 0;
	for (i = 0; i < linha; ++i)
	{
		for (j = 0; j < colum; ++j)
			{
				scanf("%d",&bi);
				matriz[i][j] = bi;
			}	
	}
	
	for (i = 0; i < linha; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			if (matriz[i][j]==1)
			{
				maiorLin[i] += 1;
			}
			if (matriz[j][i]==1)
			{
				maiorCol[i] += 1;
			}
		}
	}
	for (i = 0; i < colum; ++i)
	{
		if(maiorLin[i] > lin)
		{
			lin = maiorLin[i];
			contro = i;
		}
		if(maiorCol[i] > col)
		{
			col = maiorCol[i];
			contro2 = i;
		}
	}
	for (i = 0; i < 3; ++i)
	{
		printf("%d\n", maiorLin[i] );
	}

	for (i = 0; i < 3; ++i)
	{
		printf("%d\n", maiorCol[i] );
	}
	printf("Maior quantidade de 1 é %d e que está na linha %d\n", lin, contro);
	printf("Maior quantidade de 1 é %d e que está na coluna %d\n", col, contro2);
	return 0;
}