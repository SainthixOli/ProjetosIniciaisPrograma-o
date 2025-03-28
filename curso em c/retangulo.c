#include <stdio.h>
#include <math.h> 

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("\nA base do retangulo:\n");
    scanf("%lf", &base);

    printf("\nA altura do retangulo:\n");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("\nAREA = %lf\n", area);
    printf("\nPERIMETRO = %lf\n", perimetro);
    printf("\nDIAGONAL = %lf\n", diagonal);

    return 0;
}