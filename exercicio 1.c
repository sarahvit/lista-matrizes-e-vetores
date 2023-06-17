#include<stdio.h>


int main (){
	int i;
	int v[6];
	
	
	for(i=0;i<6;i++){
	
	printf("Digite o um valor: ");
	scanf("%d", &v[i]);
	
	
	}
	
	printf("Dados inseridos:\n");
	for(i=0;i<6;i++){
		
		printf("%d ", v[i]);
		
		
	}

	
	

	
	return 0;
}
