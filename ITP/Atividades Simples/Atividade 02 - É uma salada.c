#include <stdio.h>

int main()
{
	
	int n, m, cont2, i, cont3, cont4, cont5;
	scanf("%d",&m);
	cont2 = cont3 = cont4 = cont5 = 0;
	for (i = 1; i <= m; ++i)
	
	{
		scanf("%d", &n);
			if (n%2==0)
			{
				cont2 += 1;
			}
			if (n%3==0)
			{
				cont3 += 1;
			}
			if (n%4==0)
			{
				cont4 += 1;
			}
			if (n%5==0)
			{
				cont5 += 1;
			}
	}
	printf("%d Multiplo(s) de 2\n", cont2);
	printf("%d Multiplo(s) de 3\n", cont3);
	printf("%d Multiplo(s) de 4\n", cont4);
	printf("%d Multiplo(s) de 5\n", cont5);
	
	return 0;
}