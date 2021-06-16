#include <stdio.h>
#include <locale.h>

int main () {
	int a, b, m[3][3];
	
	/* digitar valores */
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			printf("Elemento[%d][%d] = ", a, b);
			scanf("%d", &m[a][b]);
		}
	}
	
	/* exibir valores digitados */
	for(a=0; a<3; a++){
		for(b=0; b<3; b++)
			printf("%d ", m[a][b]);
			printf("\n");
	}
	
	/* multiplicando por 5 */
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
		m[a][b]=m[a][b]*5;
		}
	}
	
	/* valores após serem multiplicados */
	printf("\n Valores multiplicados por 5:\n");
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
		printf("%d ", m[a][b]);
		printf("\n");
		}
	}
	
return 0;
}
