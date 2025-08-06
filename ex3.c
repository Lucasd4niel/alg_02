#include <stdio.h>

int soma_primos (int n)
{
    int qtd_div, i, j, soma;
    soma = 0;
    for (i = 2; i < n; i++)
    {
        qtd_div = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                qtd_div++;
            }
        }
        if (qtd_div == 0)
        {
            printf("%d\n", i);
            soma+= i;
        }
    }
    return soma;
}

int main (void)
{   
    int num, soma_total;
    printf("Informe um numero\n");
    scanf("%d", &num);
    soma_total = soma_primos(num);
    printf("Soma dos primos até %d: %d\n", num, soma_total);
    return 0;
}