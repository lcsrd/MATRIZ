#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, m[3][3], v[3];

	// captura os elementos do vetor

	printf("Informe os elementos do vetor: \n");
	for(i=0;i<3;i++){
		printf("Elemento[%d]= ",i);
		scanf("%d",&v[i]);
	}	

	//	captura os elementos da matriz

	printf("\nInforme os elementos da matriz\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("Elemento[%d][%d]= ",i,j);
		scanf("%d",&m[i][j]);
	}

	//	exibe valores originais

	printf("\nValores Originais do VETOR\n");
	for(i=0;i<3;i++)
	printf("%d ",v[i]);
	printf("\n");

	printf("\nValores Originais da MATRIZ\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		printf("%d ",m[i][j]);
		printf("\n");
	}

	//	multiplica vetor pelas colunas da matriz

	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	m[i][j]=v[i]*m[i][j];

	//	exibe valores multiplicados

	printf("\nValores Multiplicados\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		printf("%d ",m[i][j]);
		printf("\n");
	}

return 0;

}
