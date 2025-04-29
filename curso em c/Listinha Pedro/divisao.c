#include <stdio.h>

int main()
{
    int n1, n2, r;

    printf("\nDigite o primeiro numero:\n ");
    scanf("%d", &n1);

    printf("\nEscreva o segundo numero:\n ");
    scanf("%d", &n2);

    r = n1 / n2;
    
    printf("\nA soma desses numeros é igual a %d.\n\n", r);
    printf("\n%d / %d = %d\n\n", n1, n2, r);
    
    
    return 0;
}