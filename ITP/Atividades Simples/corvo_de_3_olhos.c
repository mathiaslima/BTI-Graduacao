#include <stdio.h>

int main(){
	
	int i;
	char jogadas[3], jogadas2[3];
	int soma[3]= {0};
	int cont=0;
	
	for (i = 0; i < 3; ++i)
	{
	cont = 0;
		while(cont != 1){
		scanf("%s ", jogadas);
			if ( jogadas[0]=='-' && jogadas[1]=='-' && jogadas[2] == '*'){
				soma[i] += 1;
			}	
			else if(jogadas[0] =='*' && jogadas[1]=='-' && jogadas[2]=='-'){
				soma[i] += 4;
			}
			else if(jogadas[0] =='*' && jogadas[1]=='-' && jogadas[2]=='*'){
				soma[i] += 5;
	 		}
	 		else if(jogadas[0] =='-' && jogadas[1]=='*' && jogadas[2]=='*'){
				soma[i] += 3;
	 		}
	 		else if(jogadas[0] =='-' && jogadas[1]=='*' && jogadas[2]=='-'){
				soma[i] += 2;
	 		}
	 		else if(jogadas[0] =='*' && jogadas[1]=='*' && jogadas[2]=='-'){
				soma[i] += 6;
	 		}
	 		else if(jogadas[0] =='*' && jogadas[1]=='*' && jogadas[2]=='*'){
				soma[i] += 7;
			}
			else if(jogadas[0] =='-' && jogadas[1]=='-' && jogadas[2]=='-'){
				soma[i] += 0;
			}
			else{
				scanf("%s", jogadas2);
				if(jogadas2[0]=='c' && jogadas2[1]=='a' && jogadas2[2]=='w'){
					cont++;
				}
				
			}

			}
		if(soma[i] < 1000){
		printf("%d\n", soma[i]);
	}
	}
	return 0;
}