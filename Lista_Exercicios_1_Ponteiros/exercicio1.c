#include <stdio.h>

void trocar(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\nAntes da troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    trocar(&a, &b);

    printf("\nDepois da troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
