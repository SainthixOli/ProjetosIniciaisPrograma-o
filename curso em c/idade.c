#include <stdio.h>

int main() {

    int idade, soma = 0, quant = 0;
    double media;

    do{
        printf("Digite uma idade: \n");
        scanf("%d", &idade);
        quant++;
        
        if(idade > 0 && idade != 0) {
            soma += idade;
        } else if(idade < 0 && quant == 1) {
            printf("Impossivel fazer o calculo.");
            return 0;
        } else {
            quant--;
        }

    } while(idade > 0 && idade != 0);
    
    media = (double)soma / quant;

    printf("MEDIA = %.2lf\n", media);
    
    return 0;
}