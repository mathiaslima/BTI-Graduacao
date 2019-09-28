#include <stdio.h>
 
int main() {
 
	int n, total, totalC, totalS, totalR,y,i;
	char z;
	float pc, ps, pr;
	scanf("%d", &n);
	total = totalC = totalR = totalS = 0;

	for (i = 0; i < n; ++i)
	{
		scanf("%d %c", &y, &z);
		total += y;
		switch(z)
		{
			case 'C':
				totalC += y;break;
			case 'R':
				totalR += y;break;
			case 'S':
				totalS += y;break;
	}
	}

	pc = (100.00*totalC)/total;
	ps = (100.00*totalS)/total;
	pr = (100.00*totalR)/total;
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", totalC);
	printf("Total de ratos: %d\n", totalR);
	printf("Total de sapos: %d\n", totalS);
	printf("Percentual de coelhos: %.2lf %\n", pc);
	printf("Percentual de ratos: %.2lf %\n", pr);
	printf("Percentual de sapos: %.2lf %\n", ps);
    return 0;
}