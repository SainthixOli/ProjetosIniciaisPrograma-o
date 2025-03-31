#include <stdio.h>

// Método que retorna a quantidade de meses de atraso
int calcularMesesAtraso(int diasAtraso) {
    return diasAtraso / 30;  // Divisão inteira (ex.: 35 dias = 1 mês)
}

int main() {
    int diasAtraso;
    const int LIMITE_ATRASO = 30;  // Limite para embargo

    printf("Digite quantos dias de atraso da obra: \n");
    scanf("%d", &diasAtraso);

    if(diasAtraso <= 0) {
        printf("\n\nSua obra não está atrasada...\n\n");
    } else if(diasAtraso <= LIMITE_ATRASO) {
        printf("\n\nSua obra está atrasada! (%d dias)\n\n", diasAtraso);
    } else {
        int meses = calcularMesesAtraso(diasAtraso);
        printf("\n\nSua obra está EMBARGADA! (%d meses e %d dias de atraso)\n\n", 
               meses, diasAtraso % 30);  // Mostra meses e dias restantes
    }

    return 0;
}