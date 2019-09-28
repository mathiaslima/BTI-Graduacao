#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

	int i,j, qtd;
	char pal[65];
	char tenta[65];
	int cont=0;

	
	for (i = 0; i < ; ++i)
	{
		scanf(" %c", &pal[i]);
	}
	
	scanf("%d", &qtd);
	for (i = 0; i < qtd; ++i)
	{
		scanf(" %c", &tenta[i]);
		if(toupper(pal[i])==toupper(tenta[i])){
			cont++;
		}
	}
	if (qtd == cont)
	{
		printf("Bucho Cheio!\n");
	}else{
		printf("Cabeças vao rolar!\n");
	}

	printf("%s\n", pal);
	printf("%d\n", cont);
	printf("%s\n", tenta);

	return 0;
}