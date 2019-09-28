#include <stdio.h>
 
int main() {
 
	int x, n100, n50, n2, n1, n05, n02, n01;

	scanf("%d", &x);
	
	printf("%d\n", x);
	n100 = x/100;
	x = x%100;
	n50 = x/50;
	x = x%50;
	n2 = x/20;
	x = x%20;
	n1 = x/10;
	x = x%10;
	n05 = x/5;
	x = x%5;
	n02 = x/2;
	x = x%2;
	n01 = x;
	
	printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n2);
	printf("%d nota(s) de R$ 10,00\n", n1);
	printf("%d nota(s) de R$ 5,00\n", n05);
	printf("%d nota(s) de R$ 2,00\n", n02);
	printf("%d nota(s) de R$ 1,00\n", n01);
 
    return 0;
}