#include <stdio.h>
#include <stdlib.h>  // Para system()

int main() {
    int cont = 0;
    char letra;
    
    // Limpa o buffer antes do loop
    while ((letra = getchar()) != 'q' && letra != EOF) {
        printf("Uniceplac... \n");
        cont++;
        
        // Limpa o buffer de entrada
        int c;
        while ((c = getchar()) != '\n' && c != EOF);  // Limpa até o final da linha
    }
    
    printf("Parando ... \n");
    printf("Repetições = %d \n", cont);
    system("Pause");
    return 0;
}
