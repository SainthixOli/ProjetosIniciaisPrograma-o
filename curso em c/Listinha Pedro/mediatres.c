#include <stdio.h>

int main()
{
    int n1, n2, n3;
    double r;

    printf("Numero:\n");
    scanf("%d", &n1);

    printf("\nNumero:\n");
    scanf("%d", &n2);

    printf("\nNumero:\n");
    scanf("%d", &n3);

    r = (n1 + n2 + n3) / 3.0;

    printf("\nO resultado da media desses numeros é igual a %lf\n\n", r);

    
    
    
    return 0;
}