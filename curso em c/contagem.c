#include <stdio.h>

int main(){

    int n, copia, regressivo;

    printf("\nDigite um numero: \n");
    scanf("%d", &n);
    copia = n;
    regressivo = copia;
    
    while(regressivo != 0){
        regressivo--;
        printf("\n%d\n", regressivo);
    }

    return 0;
}