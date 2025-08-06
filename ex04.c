#include <stdio.h>

/*está errado pois permutação nao é na mesma ordem, e sim se eles apenas aparecem no outro numero e na mesma quantidade*/
/*falta de interpretação*/
int permuta (int a, int b)
{
    int qtd_numa, num_a, num_b, aux_b, count;
    qtd_numa = 0;
    count = 0;
    num_a = a;
    num_b = b;
    while (num_a > 0)
    {
        num_a = num_a / 10;
        qtd_numa++;
    }
    num_a = a;
    while (num_b > 0)
    {
        aux_b = num_b % 10;
        if (num_a % 10 == aux_b)
        {
            num_a = num_a / 10;
            count++;
        }
        else
        {
            if (count != qtd_numa)
            {
                num_a = a;
                count = 0;
            }
        }
        num_b = num_b / 10;
    }
    if (count == qtd_numa)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main (void)
{
    int a, b;
    printf("Insira o valor de A e B:\n");
    scanf("%d %d", &a, &b);
    if (permuta(a,b) == 1)
    {
        printf("A é permutação de B\n");
    }
    else
    {
        printf("A não é permutação de B\n");
    }
    return 0;
} 