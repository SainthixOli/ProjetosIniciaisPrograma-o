#include <stdio.h>

int main()
{
    double largura, comprimento, area, vm2, preco;

    printf("\nDigite a largura do terreno:\n");
    scanf("%lf", &largura);

    printf("\n\nDigite o comprimento do terreno:\n");
    scanf("%lf", &comprimento);

    area = largura * comprimento;
    
    printf("\n\nDigite o valor do metro quadrado:\n");
    scanf("%lf", &vm2);

    preco = area * vm2;

    printf("\nA area do terreno é: %.2lf\n", area);
    printf("\nO valor do terreno é: %.2lf\n", preco);

    return 0;
}