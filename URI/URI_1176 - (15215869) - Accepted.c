#include <stdio.h>
 
int main() {
    unsigned long long int ve[61];
   	int i, con, con1;
   	ve[0] = 0;
   	ve[1] = 1;
   	for ( i = 2; i < 61; ++i)
   	{
   		ve[i] = ve[i-1] + ve[i-2];
   	}
   	scanf("%d", &con);
   	for ( i = 0; i < con; ++i)
   	{
   		scanf("%d", &con1);
   		printf("Fib(%d) = %lld\n", con1, ve[con1]);
   	}
    return 0;
}