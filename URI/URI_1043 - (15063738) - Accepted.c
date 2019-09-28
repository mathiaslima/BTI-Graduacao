#include <stdio.h>
 
int main() {
 
 
	float A, B, C, p , area;

	scanf("%f %f %f", &A, &B, &C);

	if ( A < B + C && B < A + C && C < A + B)
	{
		p = A + B + C;
		printf("Perimetro = %.1f\n", p);
	}
	else
	{
		area = ((A+B)*C)/2;
		printf("Area = %.1f\n", area);
	}
	
    return 0;
}