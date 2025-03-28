#include <stdio.h>

int main() 
{
    int n1, n2;

    while(n1 != n2) {
        printf("Digite dois numero:");
        scanf("%d %d", &n1, &n2);

        if(n1 > n2) {
            printf("\nDECRESCENTE.\n");
        } else if(n1 < n2 && n1 != n2) {
            printf("\nCRESCENTE.\n");
        }

    }

    printf("\nPROGRAMA ENCERRADO, DOIS NUMEROS IGUAIS!\n");
    return 0;
}