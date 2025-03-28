#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delt;
    double x1, x2;

    printf("Valor de A : ");
    scanf("%lf", &a);
    printf("Valor de B: ");
    scanf("%lf", &b);
    printf("Valor de C: ");
    scanf("%lf", &c);

    delt = pow(b, 2) - 4 * a * c;
    
    if(a == 0 || delt < 0) {
        printf("Sem raizes reais!");
        return 0; 
    } 
    
    x1 = ((-1 * b) + sqrt(delt)) / (2 * a);
    x2 = ((-1 * b) - sqrt(delt)) / (2 * a);
    printf("\nX1 = %.4lf\n", x1);
    printf("X2 = %.4lf", x2);

return 0;
}