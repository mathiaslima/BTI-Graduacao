#include <stdio.h>
 
int main() {
 
	float A, B, C;
	scanf("%f %f %f", &A, &B, &C);
	printf("TRIANGULO: %.3lf\n", (A*C)/2);
	printf("CIRCULO: %.3lf\n", C * C * 3.14159);
	printf("TRAPEZIO: %.3lf\n",((A+B)*C)/2);
	printf("QUADRADO: %.3lf\n", B*B);
	printf("RETANGULO: %.3lf\n", A*B);
 
    return 0;
}