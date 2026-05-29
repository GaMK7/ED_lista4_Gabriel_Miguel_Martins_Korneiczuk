#include <stdio.h>

void dobrar (int *ptr){
	// Multiplica o valor apontado por ptr por 2 e armazena o resultado de volta no mesmo endereço
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
