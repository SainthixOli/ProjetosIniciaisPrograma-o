#include <stdio.h>

int main()
{
    int N;
    
    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &N);

    double list[N];
    
    for(int i = 0; i < N; i++) {
        printf("Digite o numero: ");
        scanf("%lf", &list[i]);
    }

    printf("\nOs numeros digitados foram: \n");
    for(int i = 0; i < N; i++) {
        printf("%.1lf\n", list[i]);
    }
    
    return 0;
}