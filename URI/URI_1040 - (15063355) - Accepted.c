#include <stdio.h>
 
int main() {
 
float N1, N2, N3, N4, nexame;
	float media, media2;
	
	scanf("%f %f %f %f", &N1, &N2, &N3,&N4);
	media = (N1*2 + N2*3 + N3*4 + N4*1)/10;
	printf("Media: %.1f\n", media);
	if(media >= 7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else if(media < 5.0 )
	{
		printf("Aluno reprovado.\n");
	}
	else if(media >= 5.0 && media <= 6.9)
	{
		printf("Aluno em exame.\n");
		scanf("%f", &nexame);
		printf("Nota do exame: %.1f\n", nexame);
		media2 = (nexame + media)/2;
			if (media2 >= 5)
			{
				printf("Aluno aprovado.\n");
				
			}
			else if (media2 < 4.9 )
			{
				printf("Aluno reprovado.\n");


			}
			printf("Media final: %.1f\n", media2);
	}
    return 0;
}