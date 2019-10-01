#include <stdio.h>

int main(){
	int i, j, aux2=0, cont=0, aux3=0, auxR6=0;
	int cartas[5], vetorContr[5]={0}, troca;
	
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &cartas[i]);
		
	}
	//Ordenando o vetor
	for (i = 0; i < 5; ++i){
		for (j = 0; j < 5; ++j)
		{
			if (cartas[i] < cartas[j])
			{
				troca = cartas[i];
				cartas[i] = cartas[j];
				cartas[j] = troca;
			}
		}		
	}
	// montando o vetor auxiliar de 0 e 1 
	for (i = 0; i < 5; ++i)
	{
		if (cartas[i]==aux2)
		{
			vetorContr[i] = 1;
		}
		aux2 = cartas[i];
	}
	aux2 = 0;

	for (i = 1; i < 5; ++i)
	{
		if (vetorContr[i] == 1 && vetorContr[i-1] == 0 || vetorContr[i]==1 && vetorContr[i-1] == 1)
		{
			aux2++;			
		}
		else if (vetorContr[i] == 0 && vetorContr[i-1] == 0 || vetorContr[i] == 0 && vetorContr[i-1] == 1)
		{
			aux3++;	
		}	
	}
	//1 regra
	for (i = 1; i < 5; ++i){
		if(cartas[i] == cartas[0]+i)
		{
			cont++;
		}
		if(cont == 4)
		{
			printf("Caso 1: a pontuação é %d pontos\n", cartas[0]+200);
		}
	}
	// regra 2
	if (vetorContr[3] == 1 && aux3 == 1 && ( cont == 1 || cont == 0))
	{
		printf("Caso 2: a pontuação é %d pontos\n", cartas[2]+180);
	}
	// regra 3
	if (vetorContr[1]==vetorContr[4] && aux3 == 1)
	{
		printf("Caso 3: a pontuação é %d pontos\n", cartas[2]+160);
	}
	// regra 4
	if (vetorContr[4]==vetorContr[3] && aux3 == 2)
	{
		printf("Caso 4: a pontuação é %d pontos\n", cartas[2]+140);
	}
	// regra 5
	if (vetorContr[4]!=vetorContr[3] && aux2 == 2 && aux3 == 2)
	{
		printf("Caso 5: a pontuação é %d pontos\n", 3*cartas[3]+2*cartas[1]+20);
	}
	// regra 6
	if (aux2 == 1 && aux3 == 3)
	{
		for (i = 0; i < 5; ++i)
		{
			if (vetorContr[i]==1)
			{
				auxR6 = i;
			}
		}
		printf("Caso 6: a pontuação é %d pontos\n", cartas[auxR6]);
	}
	// regra 7
	if (cont == 0 && vetorContr[0]==0 && vetorContr[1]==0 && vetorContr[2]==0 && vetorContr[3]==0 && vetorContr[4]==0)
	{
		printf("Não há pontuação\n");
	}
	
	return 0;		
}

