#include <stdio.h>

int main()
{
    int N;
    double D;
    float F;

    printf("\nO numero inteiro tem endereço igual a: %p", (void*)&N);
    printf("\nO double tem endereço: %p", (void*)&D);
    printf("\nO float tem endereço: %p\n", (void*)&F);
    printf("\n");
    return 0;
}