#include <stdio.h>

int main(){
	int n, cont, j, i, k;
	scanf("%d",&k);
	cont = 0;
	for (j = 0; j < k; ++j)
	{
		scanf("%d", &n);			
		for ( i = 1; i <= n; ++i)
		{
			if (n % i == 0)
			{
				cont += 1;
			}					
		}
		if (cont == 2)
		{
			printf("%d eh primo\n", n);
			cont = 0;
		}
		else
		{
			printf("%d nao eh primo\n", n);
			cont = 0;
		}
	}	
	return 0;
}
