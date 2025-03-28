#include <stdio.h>

int main() {
    int N;
    printf("Digite um numero para definir a quantidade: \n");
    scanf("%d", &N);

    int vet[N];

    // Preenchendo o vetor
    for(int i = 0; i < N; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS:\n");
    
    // Verificando números negativos - CORRETO
    for(int i = 0; i < N; i++) {
        if(vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}