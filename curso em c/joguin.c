#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int N, tentativa;

    srand(time(NULL));

    N = rand() % 100;

    for(int i = 0; i < 10; i++) {
        
        printf("Digite um numero de 1 a 100 : ");
        scanf("%d", &tentativa);
       
        if(tentativa == N) {
            printf("\nVoce acertou o numero em %d tentativas!, ", i);
            break;
        } else if(tentativa < N) {
            printf("O numero é maior!\n");
        } else {
            printf("O numero é menor!\n");
        }
    
    }

    printf("\nO numero gerado foi %d", N);
    
    

    return 0;
}