#include <stdio.h>

void dobrar (int *ptr){
	
	*ptr = (*ptr) * 2;
}

int main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	dobrar(&num);
	printf("Dobro do seu numero: %d", num);
	
	return 0;
}
