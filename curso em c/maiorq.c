#include <stdio.h>

int main(){

    int maior = 0, vet[10];

    for(int i = 1; i <= 10; i++){
        printf("\nDigite o %d numero de 10: \n", i);
        scanf("%d", &vet[i]);

        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    
    printf("\nMAIOR NUMERO = %d\n\n", maior);

    return 0;
}