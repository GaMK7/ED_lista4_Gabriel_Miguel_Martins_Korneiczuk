#include <stdio.h>

void copiar(char *origem, char *destino){
	
	while (*origem != '\0'){
		*destino = *origem;
		
		destino++;
		origem++;
	}
}

int main(){
	char origem[] = "Hello World", destino[20];
	
	copiar(origem, destino);
	printf("Copiando para destino: %s", destino);
	
	return 0;
}
