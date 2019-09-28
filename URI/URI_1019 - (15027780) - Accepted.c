#include <stdio.h>
 
int main() {
 
	int N, x, y, z;


	scanf("%d", &N);
	x = N/3600;
	N %= 3600;
	y = N/60;
	N %= 60;
	z = N;
	printf("%d:%d:%d\n", x,y,z);
	
    return 0;
}