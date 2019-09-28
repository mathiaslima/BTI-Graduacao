#include <stdio.h>
int qtd;

	

int main(){
	int i, j;
	int lin, col;
	int flag = 0;

	char campo[8][8];

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			campo[i][j] = '*';
		}
	}
	for (i = 1; i < 7; ++i)
	{
		for (j = 1; j < 7; ++j)
		{
			scanf(" %c", &campo[i][j]);
		}
	}

	scanf("%d", &qtd);
	char mov[qtd];
	scanf("%d %d", &lin, &col);

	for (i = 0; i < qtd; ++i)
	{
		scanf("%c",&mov[i]);
	}	
	for (i = 0; i < qtd; ++i)
	{
		if (mov[i]=='D'){
			col++;
		}
		else if(mov[i]=='E'){
			col--;
		}
		else if(mov[i]=='C'){
			lin--;
		}
		else if(mov[i]=='B')
		{
			lin++;
		}
		if (lin >= 8 || lin <= 0 || col <= 0 || col >= 8)
	{
		printf("Movimento Invalido\n");
		flag =1;
		break;
	}
	else{
			if (campo[lin][col-1] == '>' || campo[lin][col+1] == '<' || campo[lin-1][col] == 'v' || campo[lin+1][col] == '^' )
			{
				printf("Freeze!\n");
				flag =1;
				break;
			}
			
	}
	}

    if(flag == 0){
    	printf("Like a Ninja!\n");
    }
	
	return 0;
}