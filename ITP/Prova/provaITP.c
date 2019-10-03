#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

	int i,j, qtd;
	char pal[65];
	char tenta[65];
	char c;
	int cont=0;
	int ok = 1;

	i = 0;

	//Lê letra por letra enquanto transforma em letras maiúsculas ate que o usuário aparte enter
	do
	{
		scanf("%c", &pal[i]);
		pal[i] = (char)toupper(pal[i]);
		i++;
	}while(pal[i-1] != '\n'); 

	//Marcando o final da string
	pal[i] = '\0';
	
	scanf("%d", &qtd);

	//Verifica se o caractere digitado se encontra na string pal
	for (i = 0; i < qtd; ++i)
	{
		scanf(" %c", &c);
		c = (char)toupper(c);
		
		if(strchr(pal, c) == NULL)
		{
			ok = 0;
		}
		else
		{
			tenta[i] = (char)(*strchr(pal, c));
		}
	}
	//O else serve para prevenir que um ponteiro NULL seja convertido em caractere
	
	//Verifica se as tentivas citaram todas as letras de pal
	if(ok)
	{
		for (i = 0; i < strlen(pal)-1; ++i)
		{
			if(strchr(tenta, pal[i]) == NULL && pal[i] != ' ')
			{
				ok = 0;
			}
		}
	}	

	if (ok)
	{
		printf("Bucho Cheio!\n");
	}
	else
	{
		printf("Cabeças vao rolar!\n");
	}

	return 0;
}
