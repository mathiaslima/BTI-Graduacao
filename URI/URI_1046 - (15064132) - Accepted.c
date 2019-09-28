#include <stdio.h>
 
int main() {
 
	int	hi, hf, ht;
	scanf("%d %d", &hi, &hf);

	if(hi >= hf)
	{
		ht = (24 - hi) + hf;
	}
	else
	{
		ht = (hf - hi);
	}
	printf("O JOGO DUROU %d HORA(S)\n", ht);
	
    return 0;
}