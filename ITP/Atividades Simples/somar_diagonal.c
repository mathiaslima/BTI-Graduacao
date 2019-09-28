#include <stdio.h>

int main(){
	float matriz[12][12]={{0}};
	int i, j;
	char op;
	float aux = 0, soma = 0;
	scanf("%c", &op);	

		for (i = 0; i < 12; ++i)
		{
			for (j = 0; j < 12; ++j)
			{
				scanf("%f", &aux);
				if(i < j){
					matriz[i][j] = aux;
				}
			}
		}
	if(op == 'S'){
		for (i = 0; i < 12; ++i)
		{
			for (j = 0; j < 12; ++j)
			{
				soma += matriz[i][j];
			}

		}
		printf("%f\n", soma);
	}
	else if (op == 'M')
	{
		for (i = 0; i < 12; ++i)
		{
			for (j = 0; j < 12; ++j)
			{
				soma += matriz[i][j];
			}

		}
		printf("%f\n", soma/66);	
	}
	return 0;
}