#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int checa_bomba(int lin, int col, char **exibicao, int **campo, int **aux, int tamLin,int tamCol){
	
	int i, j, qtd = 0, cont = 0;
	//  CONTANDO A QUANTIDADE DE BOMBAS
	for (i = lin - 1; i <= lin + 1; ++i)
		for (j = col - 1; j <= col + 1; ++j)
			qtd += campo[i][j];
		
	
	if (qtd == 0){
		// PREENCHE A MATRIZ COM ESPAÇOS VAZIOS
			if((1 < lin && lin < tamLin) || (1 < col && col < tamCol)){
			 	for (i = lin - 1; i <= lin + 1; ++i){
			 		for (j = col - 1; j <= col + 1; ++j){
			 			if(exibicao[i][j] == '#'){
			 			printf("aqui\n");	
			 				exibicao[i][j] = ' ';
			 			}
			 		}
			 	}
			}
		//CHAMADA RECURSIVA PARA VERIFICAR OUTROS LUGARES
			//Restrinções tem que ser feita, como tratamento de borta e para não verificar uma posição já verificada
		if( (2 < lin && lin < tamLin) && (2 < col && col < tamCol) && exibicao[lin][col] != 'B' && aux[lin][col] != -1){
			 for (i = lin - 1; i <= lin + 1; ++i){
		 		for (j = col - 1; j <= col + 1; ++j){
		 				printf("nem aqui\n");
		 				aux[lin][col] = -1;	//marca a posição que já foi visitada para não entrar em um loop
		 				checa_bomba(i, j, exibicao, campo, aux, tamLin, tamCol);

		 		}
		 	}	
		 }
	} else {

		// COLOCA A QUANTIDADE DE BOMBAS NA MATRIZ DE EXIBICAO
		exibicao[lin][col] = qtd + '0';	
			
	}
}

void colocarbombas(int **campo, int aux){
	int i, j, aI, aJ;
		// ALOCANDO AS BOMBAS ALEATORIAMENTE 
		if (aux == 0){
			printf("-----------------------------\n");
		}else if (aux <= 10){
			aI = 1 + (rand() % 9);
			aJ = 1 + (rand() % 9);
			if (campo[aI][aJ] == 0){
				campo[aI][aJ] = 1;
				colocarbombas(campo, aux - 1);
			}else{
				colocarbombas(campo, aux);
			}
		}else if(aux <= 40){

			aI = 1 + (rand() % 16);
			aJ = 1 + (rand() % 16);
			if (campo[aI][aJ] == 0){
				campo[aI][aJ] = 1;
				colocarbombas(campo, aux - 1);
			}else{
				colocarbombas(campo, aux);
			}
		}else if(aux <= 99){
			aI = 1 + (rand() % 16);
			aJ = 1 + (rand() % 30);
			if (campo[aI][aJ] == 0){
				campo[aI][aJ] = 1;
				colocarbombas(campo, aux - 1);
			}else{
				colocarbombas(campo, aux);
			}
		}
}


void painel_jogo(int tamTabu, char** exibicao){
	int i, j;
	system("clear");	
		
			if(tamTabu == 1){

				printf("  ");
				for (i = 1; i < 10; ++i) printf(" %d", i);
				
			printf("\n  ------------------- \n");
				for (i = 1; i < 10; ++i){
					printf("%d |", i);
					for (j = 1; j < 10; ++j){
						printf("%c ", exibicao[i][j]);
					}
					printf("|%d", i);
					printf("\n");
				}
				printf("  ------------------- \n");
				printf("  ");
				for (i = 1; i < 10; ++i) printf(" %d", i);
				printf("\n");

			}else if(tamTabu == 2){
				
				printf("  ");

					for (i = 1; i < 17; ++i) {
						if( i < 10){
							printf(" 0%d", i);
						}else{
							printf(" %d", i);
						}
					}
					printf("\n   -------------------------------------------------   \n");

					for (i = 1; i < 17; ++i){
						if( i < 10){
							printf(" 0%d|", i);
						}else{
							printf(" %d|", i);
						}
						for (j = 1; j < 17; ++j){
							printf("%c  ", exibicao[i][j]);
						}
						if( i < 10){
							printf("|0%d", i);
						}else{
							printf("|%d", i);
						}
						printf("\n");
					}
					printf("   -------------------------------------------------  \n");
				printf("  ");

					for (i = 1; i < 17; ++i) {
						if( i < 10){
							printf(" 0%d", i);
						}else{
							printf(" %d", i);
						}
					}

				printf("\n");
			

			}else if(tamTabu == 3){
				printf("  ");

					for (i = 1; i < 31; ++i) {
						if( i < 10){
							printf(" 0%d", i);
						}else{
							printf(" %d", i);
						}
					}
					printf("\n   -------------------------------------------------------------------------------------------   \n");

					for (i = 1; i < 17; ++i){
						if( i < 10){
							printf(" 0%d|", i);
						}else{
							printf(" %d|", i);
						}
						for (j = 1; j < 31; ++j){
							printf("%c  ", exibicao[i][j]);
						}
						if( i < 10){
							printf("|0%d", i);
						}else{
							printf("|%d", i);
						}
						printf("\n");
					}
					printf("   -------------------------------------------------------------------------------------------  \n");
				printf("  ");

					for (i = 1; i < 31; ++i) {
						if( i < 10){
							printf(" 0%d", i);
						}else{
							printf(" %d", i);
						}
					}

				printf("\n");
			}

}

void planta_bandeira(int lin, int col, char** exibicao){
	exibicao[lin][col] = 'B';//planta a bandeira
}

void exibicao_bombas(char** exibicao, int** campo){
	int i, j;
	//coloca para aparecer as bombas quando o jogo finaliza
	for (i = 0; i < 50 ; ++i){
		for (j = 0; j < 50; ++j){
			if (campo[i][j] == 1){
				exibicao[i][j] = 'G';
			}
		}
	}

}
void prepararAux(int **aux, int qual){
	int i, j;

	//preenchendo a matriz auxiliar de acordo com tamanho

	switch(qual){
		case 1:
			for (i = 1; i <= 9; ++i){
				for (j = 1; j <= 9; ++j){
					aux[i][j] = 0;
				}
			};
			break;
		case 2:
			for (i = 1; i <= 16; ++i){
				for (j = 1; j <= 16; ++j){
					aux[i][j] = 0;
				}
			};
			break;
		case 3:
			for (i = 1; i <= 16; ++i){
				for (j = 1; j <= 30; ++j){
					aux[i][j] = 0;
				}
			};
			break;
	}

}
int verWin(char** exibicao, int tam){
	//função que ainda não funciona, tenho que pensar em outro jeito para fazer essa merda
	int i, j;
	int qtd = 0;
	switch(tam){
		case 1:
			for (i = 1; i <= 9; ++i){
				for (j = 1; j <= 9; ++j){
					if (exibicao[i][j] == ' '){
						qtd++;		
					}
				}
			};
			if(qtd == 71){
				return 1;
			};
			break;
		case 2:
			for (i = 1; i <= 16; ++i){
				for (j = 1; j <= 16; ++j){
					if (exibicao[i][j] == ' '){
						qtd++;		
					}
				}
			};
			if(qtd == 216){
				return 1;
			};
			break;
		case 3:
			for (i = 1; i <= 16; ++i){
				for (j = 1; j <= 30; ++j){
					if (exibicao[i][j] == ' '){
						qtd++;		
					}
				}
			};
			if(qtd == 381){
				return 1;
			};
			break;
	}
	return 0;

}

int main(){

	int tamTabu;
	int i, j, lin, col, cont = 0, esc, parada = 0, win;
	char **exibicao = (char**)malloc(20*sizeof(char*));
	int **campo = (int**)malloc(20 * sizeof(int*));
	int **aux = (int**)malloc(20 * sizeof(int*));

	srand(time(NULL));

	for (i = 0; i < 20; ++i){
		campo[i] = (int*)malloc(40 * sizeof(int));
		exibicao[i] = (char*)malloc(40 * sizeof(int));
		aux[i] = (int*)malloc(40 * sizeof(int));
		for (j = 0; j < 40; ++j){
			aux[i][j]= -1;
			campo[i][j] = 0;
			exibicao[i][j] = '#';
		}
	}
	while(cont != 1){
			printf("---------------------------------------------\n");
			printf("\t\t\tBem Vindo!!\n");
			printf("---------------------------------------------\n");
			printf("Primeiro escola o tamanho do tabuleiro.\n");
			printf("1 - para tabuleiro 9x9 com 10 minas.\n");
			printf("2 - para tabuleiro 16x16 com 40 minas.\n");
			printf("3 - para tabuleiro 16x30 com 99 minas.\n");
			scanf("%d", &tamTabu);
			printf("---------------------------------------------\n");
			switch(tamTabu){
				case 1:
					colocarbombas(campo, 10);
					prepararAux(aux, 1);
				 	cont = 1;
				 	break;

				case 2: 
					colocarbombas(campo, 40);
					prepararAux(aux, 2);
					cont = 1;
					break;

				case 3: 
					colocarbombas(campo, 99);
					prepararAux(aux, 3);
					cont = 1;
					break;
				default: printf("Opção inválida!\n");
			}
	}

	do{

		
		painel_jogo(tamTabu, exibicao);
		printf("---------------------------------------------\n");
		printf("1 - PARA ESCOLHER ONDE QUER CAVAR\n2 - PARA COLOCAR UMA BANDEIRA\n");
		printf(">>>>> "); scanf("%d", &esc);
		printf("---------------------------------------------\n");
			switch(esc){
			case 1: 
					printf("Insira o número da linha e da coluna, respectivamente: \n");
					scanf("%d %d", &lin, &col);
					if ( exibicao[lin][col] != 'B'){
						if (campo[lin][col]){ //Se sim, explode e encerra o jogo	
							exibicao_bombas(exibicao, campo);
							painel_jogo(tamTabu, exibicao);
							printf("----------------------GAME OVER!!!!! -------------------\n");
							parada = 1;
					    }
						else
							switch(tamTabu){
								case 1:
									checa_bomba(lin, col, exibicao, campo, aux, 9 , 9); //Se não, checa quantas bombas existem ao redor
								break;
								case 2:
									checa_bomba(lin, col, exibicao, campo, aux, 16 , 16); //Se não, checa quantas bombas existem ao redor
								break;
								case 3:
									checa_bomba(lin, col, exibicao, campo, aux, 16 , 30); //Se não, checa quantas bombas existem ao redor
								break;
							}
					}; 
					break;
			case 2:

					printf("Insira as coordenadas para inserir a bandeira: \n");
					scanf("%d %d", &lin, &col);
					planta_bandeira(lin, col, exibicao); break;

			default: 
				printf("Opção inválida!\n");
			}
		win = verWin(exibicao, tamTabu);
		if (win){
			exibicao_bombas(exibicao, campo);
			painel_jogo(tamTabu, exibicao);
			printf("\t\tParabens\n");
		}
		
	}while(parada != 1);

	return 0;
}