#include <stdio.h>

void maior_menor(int vet[], int n, int *maior, int *menor)
{
    int i;
    *maior = vet[0];
    *menor = vet[0];
    for (i = 1; i < n; i++) {
        if (vet[i] > *maior) {
            *maior = vet[i];
        }
        if (vet[i] < *menor) {
            *menor = vet[i];
        }
    }    
}
int main(void)
{
    int vet[100], n, i, maior, menor;
    printf("Informe quantos numeros serão inseridos (max 100):\n");
    scanf("%d", &n);
    printf("Digite os numeros inteiros:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    maior_menor(vet, n, &maior, &menor);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}