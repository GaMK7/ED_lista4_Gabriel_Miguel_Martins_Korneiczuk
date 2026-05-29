#include <stdio.h>

void inverterString(char *str)
{
    char *inicio = str;
    char *fim = str;
    char temp;

    // Move o ponteiro fim para o final da string
    while (*fim != '\0')
        fim++;

    fim--;

    // Inverte os caracteres da string usando os ponteiros inicio e fim
    while (inicio < fim)
    {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main()
{
    char texto[] = "brasil";

    inverterString(texto);

    printf("%s\n", texto);

    return 0;
}