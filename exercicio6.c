#include<stdio.h>

#define N 10
int main (){
	
	int v[N];
	int i, maior, menor,posM; 
	
	for(i=0;i<N;i++){
		
		printf("Digite a %d posicao: ", i);
		scanf("%d", &v[i]);
	
	}
	
	maior=v[0];
	posM = 0;
	for(i = 1; i< N; i++){
		
		if(v[i] > maior){
			maior = v[i];
			posM = i;
		}
	}
	
	printf("Vetor: ");
	for(i=0;i<N;i++){
		printf("%d ", v[i]);
	}
	printf("\nMaior valor: %d", maior);
	printf("\nPosicao %d", posM);
	
	return 0;
}
