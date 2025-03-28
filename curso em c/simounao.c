#include <stdio.h>

int main() {
    char rsp;
    int n1, n2; 


    do {
       
       printf("Digite o primeiro numero: ");
       scanf("%")
       
       
       
       
        printf("Voce deseja que o programa continue rodando? (s/n): ");
        scanf(" %c", &rsp); // Espaço antes do %c para ignorar o \n do buffer
    } while (rsp == 's'); // Comparação com caractere 's'

    printf("Programa encerrado.\n");
    return 0;
}