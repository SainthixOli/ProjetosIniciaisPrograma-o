#include <stdio.h>

int main() {
    int n, fatorial = 1; 

    printf("Digite um numero para descobrir o fatorial: \n");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        fatorial *= i; // Equivalente a: fatorial = fatorial * i
    }

    printf("\nO fatorial do numero %d eh %d.\n", n, fatorial);

    return 0;
}