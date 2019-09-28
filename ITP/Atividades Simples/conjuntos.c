#include <stdio.h>
#include <string.h>


int conjuntos[100001][61];

void leitura_conjuntos(){
	int i, j, qtd;
	int elementos, num;
	scanf("%d", &qtd);
	for (int i = 0; i < qtd; ++i)
	{
		scanf("%d", &elementos);
		for (j = 0; j < elementos; ++j)
		{
			scanf("%d", &num);
			conjuntos[i][num] = 1;
		}
	}
} 

int intersecao(int conj1, int conj2){
	int i, cont = 0;

	for (i = 1; i < 60; ++i)
	{
		if(conjuntos[conj1][i] && conjuntos[conj2][i])
			cont++;
	return cont;
	}
}
int uniao(int conj1, int conj2){
		int i, cont = 0;

	for (i = 1; i < 60; ++i)
	{
		if(conjuntos[conj1][i] || conjuntos[conj2][i])
			cont++;
	return cont;
}
int main(){
	
	int casos;
	int i, j, op;
	int cod, c1, c2;
	scanf("%d", &casos);

	for (i = 0; i < casos; ++i){
		memset(conjuntos, 0, sizeof(conjuntos));
		
		//leitura dos conjuntos
		leitura_conjuntos();
	
		//leitura das operacoes
		scanf("%d", &op);
		for (int i = 0; i < op; ++i){
			//verificar qual a operação e executá-la	
			scanf("%d %d %d", &cod, &c1, &c2);

			switch(cod){
				case 1:  printf("%d\n",intersecao(c1, c2));break;
				case 2: printf("%d\n", uniao(c1, c2)); break;
		}
	}
return 0;
}
}
}
