#include <stdio.h>

int main() 
{
    int n;

    printf("Digite quantos numeros vc quer? \n");
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        printf("\nDigite o numero: \n");
        scanf("%d", &vet[i]);
    }
    
    printf("\nOs numeros ao contrario sao: \n\n");
    
    for(int i = n - 1; i >= 0; i--) {
        printf("\n%d\n", vet[i]);
    }





    return 0;
}