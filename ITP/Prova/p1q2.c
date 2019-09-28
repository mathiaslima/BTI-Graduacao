#include <stdio.h>

char lab[6][6];
int cont = 0;

int fun(int a , int b ){
 	int con;
 	printf("%d %d\n", a, b);
 	if (lab[a][b] == '>'){
 		cont++;
 		return fun(a , b+1);
 	}
 	else if(lab[a][b] == 'v'){
 		cont++;
 		return fun(a+1, b);
 	}
 	else if (lab[a][b]=='^'){
 		cont++;
 		return fun(a-1, b);
 	}
 	else if (lab[a][b] == '<'){
 		cont++;
 		return fun(a , b-1);
 	}
 	else if(lab[a][b] == 'F'){
 		cont++;
 		con = 1;
 		return con;
	}
	else{
		con = 2;
		return con;
	} 	
}


int main(){
	
	int incL = 0 , incC = 0, passos = 0, i, j, con = 0;

	for (i = 0; i < 6; ++i){
		for (j = 0; j < 6; ++j){
			lab[i][j] = '*';
		}
	}
	for (i = 1; i < 6; ++i){
		for (j = 1; j < 6; ++j){
			scanf(" %c", &lab[i][j]);
		}
	}
	
	for (i = 1; i < 6; ++i){
		for (j = 1; j < 6; ++j){
			if(lab[i][j] == 'I'){
				incL = i;
				incC = j;
			}
		}
	}
		
		if(lab[incL + 1][incC] != '*'){
			incL++;
		}
		else if(lab[incL][incC+1] != '*'){
			incC++;
		}
		else if(lab[incL-1][incC] != '*'){
			incL--;
		}
		else if(lab[incL][incC-1] != '*'){
			incC--;
		}

		while(con != 1){
			con = fun(incL, incC);
			if (con == 2){
				printf("Lost in the Darkness...\n");
				con = 1;
			}else{
			printf("Escapou com %d passos.\n", cont);
			}
		}

	return 0;
}
 