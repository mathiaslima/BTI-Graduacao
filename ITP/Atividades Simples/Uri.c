#include <stdio.h>

int main(){
	//O que eu vou definir/salvar/armazenar para resolver
	/*	
		- Um inteiro para guardar a quantidade de fotos
		- um inteiro para fazer a leitura de cada foto
		- um vetor para marcar quais tubarões  aparece
		- um inteiro para contar quantas espécies diferentes

	*/
	int quantidade, foto, i, especies = 0;
	int apareceu[15]= {0};

	//sequencia de passos logicos
	/*
		- Lendo as entradas
		----> lê a quantidade de fotos
		----> lê cada foto
		- para cada foto que eu ler:
		----> Testar se o tubarão da foto já apareceu ou não
		----> se ele não apareceu:
		----------> conta mais uma espécie
		----------> Diz que essa espécie da foto apareceu
		
	*/
	scanf("%d", &quantidade);

	for (i = 0; i < quantidade; ++i)
	{
		scanf("%d", &foto);

		if (apareceu[foto] == 0)
		{
			especies++;
			apareceu[foto] = 1;
		}
	}

	//Qual a minha saída
	/*
		. imprime a sáida do programa
		----->  quantas especies diferentes teve
		-----> a lista das espécies	
	*/
	printf("%d especies diferentes.\n", especies);

	for (int i = 1; i <= 14  ; ++i)
	{
		if (apareceu[i] == 1)
		{
			switch(i)
			{
				case 1: printf("Tubarão Branco\n");break;
				case 2: printf("Tubarão Martelo\n");break;
				case 3: printf("Tubarão Touro\n");break;
				case 4: printf("Tubarão Baleia\n");break;
				case 5: printf("Tubarão Lixa\n");break;
				case 6: printf("Tubarão Frade\n");break;
				case 7: printf("Tubarão Tigre\n");break;
				case 8: printf("Tubarão Cabeça-Chata\n");break;
				case 9: printf("Tubarão Serra\n");break;
				case 10: printf("Tubarão de Pontas Negras\n");break;
				case 11: printf("Tubarão Raposa\n");break;
				case 12: printf("Tubarão Mako\n");break;
				case 13: printf("Tubarão Bruxa\n");break;
				case 14: printf("Tubarão Azul\n");break;
			}
		}
	}

	return 0;
}