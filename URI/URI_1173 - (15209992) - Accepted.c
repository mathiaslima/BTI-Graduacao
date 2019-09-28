#include <stdio.h>
 
int main() {
 
	int v ,ve[10], i;
	scanf("%d", &v);
	ve[0] = v;

	for (i = 1; i < 10; ++i)
	{

		ve[i] = v * 2;
		v = v + v;
	}
	for (i = 0; i < 10; ++i)
	{
		printf("N[%d] = %d\n", i, ve[i]);
	}
	
	return 0;
}