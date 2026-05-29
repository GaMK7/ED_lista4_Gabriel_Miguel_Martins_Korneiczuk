#include <stdio.h>

void trocar(int *a, int *b) {

    int temp;

    // Armazena temporariamente o valor apontado por a
    temp = *a;

    // Atribui o valor de b para a
    *a = *b;

    // Atribui o valor armazenado em temp para b
    *b = temp;
}

int main() {

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\nAntes da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    trocar(&a, &b);

    printf("\nDepois da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
