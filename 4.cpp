#include <stdio.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL,"portuguese");
	int matriz[4][4];
	int contagem = 0;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%d linha, %d coluna = ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++)
			if(matriz[i][j] > 10)
				contagem++;
	
	printf("\nExistem na matriz %d números maiores que 10.", contagem);			
		
return 0;	
}
