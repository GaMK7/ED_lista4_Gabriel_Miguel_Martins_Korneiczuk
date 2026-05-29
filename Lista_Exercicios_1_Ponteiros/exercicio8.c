#include <stdio.h>

void calculadora(float a, float b, float *soma, float *sub, float *mult, float *div)
{

    // Realiza as operações de soma, subtração, multiplicação e divisão usando os ponteiros para armazenar os resultados
    *soma = a + b;
    *sub = a - b;
    *mult = a * b;
    *div = a / b;
}

int main()
{
    float a = 10, b = 2;
    float soma, sub, mult, div;

    calculadora(a, b, &soma, &sub, &mult, &div);

    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", sub);
    printf("Multiplicacao: %.2f\n", mult);
    printf("Divisao: %.2f\n", div);

    return 0;
}