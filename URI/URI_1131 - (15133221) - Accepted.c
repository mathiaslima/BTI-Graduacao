#include <stdio.h>
 
int main() {
 
int in, gr, sair, vInt, vGr, emp, cont;
	in = gr = sair = vGr = vInt = emp = cont = 0;
	do
	{
		scanf("%d %d %d", &in, &gr, &sair);
		printf("Novo grenal (1-sim 2-nao)\n");
		if (in > gr)
			{
				vInt += 1;
			}
		else if(in == gr)
		{
			emp += 1;
		}
		else
		{
			vGr += 1;
		}
		cont += 1;	
	} while (sair != 2);
	printf("%d grenais\n",cont);
	printf("Inter:%d\n",vInt);
	printf("Gremio:%d\n",vGr);
	printf("Empates:%d\n",emp);
	if (vInt > vGr)
	{
		printf("Inter venceu mais\n");
	}
	else
	{
		printf("Gremio venceu mais\n");
	} 
    return 0;
}