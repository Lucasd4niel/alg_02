#include <stdio.h>
#include <string.h>

void qtd_frase (char pal[], char fras[], int *aux_total)
{
    int i, j, aux_pal, qtd;
    aux_pal = 0;
    for (i = 0; pal[i] != '\0'; i++)
    {
        aux_pal++;
    }
    i = 0;
    while (fras[i] != '\0')
    {     
        
        i++;
    }
}
int main(void)
{
    int total;
    char pal[30], fras[1000];
    total = 0;
    printf("Insira uma palavra\n");
    scanf(" %[^\n]", pal);
    printf("Insira uma frase\n");
    scanf(" %[^\n]", fras);
    qtd_frase(pal, fras, &total);
    printf("A palavra aparece %d vezes na frase\n", total);
    return 0;
}