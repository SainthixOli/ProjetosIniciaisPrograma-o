#include <stdio.h>

int main() {
    int n, soma = 0, contador = 0;  
    double media;

    do {
        printf("\nDigite um numero (negativo para parar): \n");
        scanf("%d", &n);

        if(n >= 0) {
            soma += n;
            contador++;  
        }
    } while(n >= 0);  

    if(contador > 0) {  
        media = (double)soma / contador;
        printf("\n\nMEDIA = %.2lf.\n", media);
    } else {
        printf("\nNenhum numero valido foi digitado!\n");
    }

    return 0;
}