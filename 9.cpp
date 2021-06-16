#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int m1[4][4], m2[4][4], m3[4][4];
	
	printf("\nPrimeira matriz\n");
	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++) {
		  printf("\nMatriz 1 [%d][%d] = ", i, j);
		  scanf("%d", &m1[i][j]); 	
	}

	printf("\nSegunda matriz\n");
	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++) {
		  printf("\nMatriz 2 [%d][%d] = ", i, j);
		  scanf("%d", &m2[i][j]); 	
	}	
	
	printf("\n\nMaiores valores de cada posição\n");
	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++) {
			if (m1[i][j] > m2[i][j]) 
			m3[i][j] = m1[i][j];
			else m3[i][j] = m2[i][j];
		    printf("\nO maior elemento da posição [%d][%d] é: %d", i, j, m3[i][j]); 
	}	
	
	
	
	

return 0;
}
