#include <stdio.h>
 
int main() {
	int ve[10005] = {0}, v, i, ler, ler2, ler3;
	int alt = 0;
	scanf("%d", &v);
	for ( i = 0; i < v; ++i)
	{
		scanf("%d %d %d", &ler, &ler2, &ler3);

		for (int i = ler; i < ler2 ; ++i)
		{
			if ( ler3 >= ve[i])
			{
				ve[i] = ler3;
			}
		}
	}
	for (i = 0; i < 10005; ++i)
	{
		if (alt != ve[i])
		{
			printf("%d %d ", i, ve[i]);
			alt = ve[i];
		}
		
	}
	printf("\n");
	return 0;
}