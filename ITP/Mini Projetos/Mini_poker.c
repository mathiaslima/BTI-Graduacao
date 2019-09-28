#include <stdio.h>

int main(){
	int i, j, aux2=0, aux=0, aux3=0;
	int cartas[5], pontos[5]={0};
	
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &cartas[i]);
		
	}
		
	for (i = 0; i < 5; ++i){
		for (j = 0; j < 5; ++j)
		{
			if (cartas[i] < cartas[j])
			{
				aux2 = cartas[i];
				cartas[i] = cartas[j];
				cartas[j] = aux2;
			}
		}		
	}
	aux2 = 0;
	//Primeira regra.
	for (i = 1; i < 5; ++i){
		if(cartas[i] == cartas[0]+i)
		{
			aux++;
		}
		if(aux == 4)
		{
			printf("a pontuação é %d pontos\n", cartas[0]+200);
		}
	}
	
	if (cartas[1]==cartas[4])
	{
		printf("a pontuação é %d pontos\n", cartas[2]+180);
	}
	else if(cartas[0]==cartas[3]){
		printf("a pontuação é %d pontos\n", cartas[2]+180);	
	}
	if (cartas[0] == cartas[2] && cartas[2] != cartas[3] || cartas[2] == cartas[4] && cartas[2]!= cartas[1])
	{
		if (cartas[2] == cartas[4] && cartas[0] == cartas[1])
		{
			printf("a pontuação é %d pontos\n", cartas[2]+160);
		}
		if (cartas[2] == cartas[0] && cartas[3] == cartas[4])
		{
			printf("a pontuação é %d pontos\n", cartas[2]+160);
		}
		if (cartas[2] == cartas[4] && cartas[0] != cartas[1])
		{
			printf("a pontuação é %d pontos\n", cartas[2]+140);
		}
		if (cartas[2] == cartas[0] && cartas[3] != cartas[4])
		{
			printf("a pontuação é %d pontos\n", cartas[2]+140);
		}
	}
	
	if(cartas[0]==cartas[1]!= cartas[2] || cartas[4]==cartas[3]!=cartas[2] || cartas[0]==cartas[1] && cartas[2]==cartas[3]!=cartas[4] || cartas[3]==cartas[4] && cartas[1]==cartas[2]!=cartas[0]){
		printf("a pontuação é %d pontos\n", 3*cartas[3]+2*cartas[1]+20);
	}



	printf("\n");
	printf("%d %d \n", aux2, aux3);
	return 0;		
}

