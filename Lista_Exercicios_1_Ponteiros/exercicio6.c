#include <stdio.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes)
{
    *vogais = 0;
    *consoantes = 0;

    // Percorre cada caractere da string até encontrar o caractere nulo '\0'
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            (*vogais)++;
        }
        else if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            (*consoantes)++;
        }

        str++;
    }
}

int main()
{
    char texto[] = "Brasil";
    int vogais, consoantes;

    contarVogaisConsoantes(texto, &vogais, &consoantes);

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}