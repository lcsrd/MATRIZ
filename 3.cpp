#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int matriz[3][4];
	int valor = 1, media = 0, pares = 0, impares = 0, contador = 0;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			matriz[j][i] = valor;
			valor++;
			
			if(matriz[j][i]%2 == 0){
				pares++;
			}
			else {
				impares++;
			}
			
			media += matriz[j][i];
			contador++;
			printf("Elementos: %d\n", matriz[j][i]);
		}
	}
	
	media = media/contador;
	
	printf("\nQuantidade de elementos pares: %d\n", pares);		
	printf("\nQuantidade de elementos impares: %d\n", impares);		
	printf("\nMédia de todos elementos: %d\n", media);
	
return 0;
}
