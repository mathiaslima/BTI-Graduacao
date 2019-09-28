#include <stdio.h>

int adicao(int a, int b){
	int soma = a + b;
	return soma;
}

int subtracao(int a, int b){
	int sub = a - b;
	return sub;
}

int multplicacao(int a, int b){
	int mult = a * b;
	return mult;
}

int divisao(int a, int b){
	int div;

	if (b == 0){
		printf("Não é possível dividir por 0\n");	
	}
	else{
		div = a/b;
		return div;
	}
}

int main(){
	int x, y, resultado;
	char op;
	printf("Digite o primeiro número\n");
	scanf("%d", &x);
	printf("Digite o segundo número\n");
	scanf("%d", &y);
	printf("Digite o operador desejado\n");
	scanf("%c", &op);
	
	switch(op){
		case '+':  
		resultado  = adicao(x , y);
		break;
		case '-': 
		resultado = subtracao(x , y);
		break;
		case '*':  
		resultado  = multplicacao(x , y);
		break;
		case '/': 
		resultado = divisao(x , y);
		break;
	};
	printf("O resultado da operação é : %d\n", resultado);

	return 0;
}
