#include <stdio.h>

int main() {

    int N, soma;
    double media;

    printf("Digite um numero para limitar: \n");
    scanf("%d", &N);
    int vet[N];

    for(int i = 0; i < N; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &vet[i]);
    }
    
    printf("VALORES = ");
    for(int i = 0; i < N; i++) { 
        printf("%d ", vet[i]);
    }
    
    soma = 0;
    for(int i = 0; i < N; i++) {
        soma += vet[i];
    }
    printf("\nSOMA = %d\n", soma);
    media = (double)soma / N;
    printf("\nMEDIA = %.2lf\n", media);
    
    return 0;
}