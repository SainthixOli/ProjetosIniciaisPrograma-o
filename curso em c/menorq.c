#include <stdio.h>

int main() 
{
    int n1, n2, n3, menor;

    printf("\a");
    printf("Escreva o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nEscreva o segundo numero: ");
    scanf("%d", &n2);
    printf("\nEscreva o terceiro numero: ");
    scanf("%d", &n3);
    
    if(n1 < n2 && n1 < n3) {
        menor = n1;
    } else if(n2 < n1 && n2 < n3) {
        menor = n2;
    } else {
        menor = n3;
    }

    printf("\nO menor numero é %d", menor);

    return 0;
}