#include <stdio.h>
 
int main() {
 
	double z, x, y;
	char nome;
	
	scanf("%s %lf %lf", &nome, &x, &y);
	z = x + (y*0.15);
	printf("TOTAL = R$ %.2lf\n",z );
 
    return 0;
}