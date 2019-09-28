#include <stdio.h>
 
int main() {
 
	float ve[100];
	int i;
	
	for (i = 0; i < 100; ++i)
	{
		scanf("%f", &ve[i]);
		if (ve[i] <= 10)
		{
			printf("A[%d] = %.1f\n",i , ve[i]);
		}

	}

    return 0;
}