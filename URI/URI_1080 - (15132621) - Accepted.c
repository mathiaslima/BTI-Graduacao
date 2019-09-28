#include <stdio.h>
 
int main() {
 

	int num, i, maior, contr;
	contr = 0;
	maior = 0;
	for (i = 0; i < 100; ++i)
	{
		scanf("%d", &num);
		while(num > maior)
		{
			maior = num;
			contr = i;
		}
	}
	printf("%d\n%d\n",maior,contr+1);
    return 0;
}