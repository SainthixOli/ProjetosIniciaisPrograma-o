#include <stdio.h>

int main() 
{
    int n;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("\nO numero e par!\n");

    } else {
        printf("O numero é impar!\n\n");
    }

    return 0;
}