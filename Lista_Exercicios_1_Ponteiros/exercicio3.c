#include <stdio.h>

int main(){
	int var = 45, *ptr;
	
	ptr = &var;
	
	printf("\nValor da Variavel: %d", var);
	printf("\nEndereço da Variavel:%p", ptr);
	printf("\nValor do ponteiro: %d", *ptr);
	printf("\nValor apontado pelo ponteiro: %p", &ptr);
	
	return 0;
}
