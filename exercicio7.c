#include<stdio.h>

#define N 15
int main (){
	int i, soma;
	int v[N];
	for(i=0;i<N;i++){
	printf("Digite a %d nota: ", i+1);
	scanf("%d", &v[i]);
	}
	for(i=0;i<15;i++){
		soma=soma+v[i];
	}
	
	printf("Media:%d ", soma/15);	
	return 0;
}
