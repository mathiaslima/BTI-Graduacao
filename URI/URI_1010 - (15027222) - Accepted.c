#include <stdio.h>
 
int main() {
 

	int cp1,cp2,np1,np2;
	float pp1, pp2;
	scanf("%d %d %f %d %d %f", &cp1,&np1,&pp1,&cp2,&np2,&pp2);
	printf("VALOR A PAGAR: R$ %.2f\n", (np1*pp1) + (np2*pp2));

 
    return 0;
}