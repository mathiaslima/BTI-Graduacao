#include <stdio.h>

int main(){
	
	int tam, i, cont2=0;
	int cont[5]={0};
	scanf("%d", &tam);
	char texto[tam];
		
		for (i = 0; i < tam; ++i)
		{
			scanf(" %c", &texto[i]);
		}
		for (i = 0; i < tam; ++i)
		{
			if (texto[i]=='a' || texto[i]=='A')
			{
				cont[0] += 1;
			}
			else if (texto[i]=='e' || texto[i]=='E')
			{
				cont[1] += 1;
			}
			else if (texto[i]=='i' || texto[i]=='I')
			{
				cont[2] += 1;
			}
			else if (texto[i]=='o' || texto[i]=='O')
			{
				cont[3] += 1;
			}
			else if (texto[i]=='u' || texto[i]=='U')
			{
				cont[4] += 1;
			}

		}
		for (i = 0; i < 5; ++i)
		{
			if (cont[i] == cont[0])
			{
				cont2++;
			}

		}
		if (cont2 == 5)
		{
			printf("Mensagem secreta!\n");
		}
		else
		{
			printf("Mensagem normal.\n");
		}


	return 0; 
}