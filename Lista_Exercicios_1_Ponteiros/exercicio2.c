#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor){
	
	*maior = array[0];
	*menor = array[0];
	for(int i = 0; i < tamanho; i++){
		if(array[i] > *maior){
			*maior = array[i];
		}
		
		if(array[i] < *menor){
			*menor = array[i];
		}
	}
}

int main(){
	int arr[5], tamanho, maior, menor;
	
	printf("Digite o tamanho do seu array: ");
	scanf("%d", &tamanho);
	
	for(int i = 0; i < tamanho; i++){
		printf("\nDigite um numero: ");
		scanf("%d", &arr[i]);
	}
	
	encontrarMaiorMenor(arr, tamanho, &maior, &menor);
	
	printf("\nO maior numero é %d", maior);
	printf("\nO menor numero é %d", menor);
	
	return 0;
}
