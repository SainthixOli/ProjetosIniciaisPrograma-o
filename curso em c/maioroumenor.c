#include <stdio.h>

int main(){

    int n1, n2;

    printf("\nDigite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: \n");
    scanf("%d", &n2);
    
    if(n1 > n2) {
        printf("\nO numero %d é maior que %d\n", n1, n2);
    } else if(n2 > n1) {
        printf("\nO numero %d é maior que %d\n\n", n2, n1);
    } else {
        printf("Os numeros sao inguais!!!");
    }






    return 0;
}