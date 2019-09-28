#include <stdio.h>
 
int main() {
 
	int ve[10], i;

	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &ve[i]);
	}
	for (i = 0; i < 10; ++i)
	{
		if (ve[i] <= 0)
		{
			ve[i] = 1;
		}
		printf("X[%d] = %d\n", i,ve[i]);
	}  
	return 0;

    
}