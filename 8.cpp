#include <stdio.h>
#include <locale.h>  

int main () {
	setlocale(LC_ALL,"portuguese");
	int matriz[5][5];
	int num = 0;
	
	printf("Informe os elementos da matriz: \n");  
	printf("\n");
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("Posição = Linha: %d - Coluna %d = ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}	
	}

	printf("\nPesquisar um número: \n");
	scanf("%d", &num); 
	
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
  			if(matriz[i][j] == num){
			printf("Numero encontrado na linha: %d e Coluna: %d\n", i+1, j+1);
			}
		}
	}	

return 0;
}
