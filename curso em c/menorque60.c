#include <stdio.h>

int main()
{
    double nota1, nota2, notaf;

    printf("Digite a primera nota: ");
    scanf("%lf", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%lf", &nota2);

    notaf = nota1 + nota2;

    printf("\nNOTA FINAL = %.2lf", notaf);
    
    if(notaf < 60.0) {
        printf("\nALUNO REPROVADO!");
    }


    return 0;
}