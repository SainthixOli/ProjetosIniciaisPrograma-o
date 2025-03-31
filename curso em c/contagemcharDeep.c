#include <stdio.h>
#include <ctype.h> // Para isspace()
#include <string.h>

int main() {
    int caracteres = 0, palavras = 0, linhas = 0;
    int dentro_de_palavra = 0; // Flag para controlar quando estamos numa palavra
    char c;

    printf("Digite seu texto (Ctrl+D ou Ctrl+Z para encerrar):\n");

    while ((c = getchar()) != EOF) {
        caracteres++;
        
        // Conta palavras (quando encontra espaços/novas linhas após uma palavra)
        if (isspace(c)) {
            if (dentro_de_palavra) {
                palavras++;
                dentro_de_palavra = 0;
            }
            
            if (c == '\n') {
                linhas++;
            }
        } else {
            dentro_de_palavra = 1;
        }
    }
    
    // Conta a última palavra se o texto não terminar com espaço
    if (dentro_de_palavra) {
        palavras++;
    }
    
    // Conta a última linha se não terminar com \n
    if (caracteres > 0) {
        linhas++;
    }

    printf("\nEstatísticas do texto:\n");
    printf("Caracteres: %d\n", caracteres);
    printf("Palavras: %d\n", palavras);
    printf("Linhas: %d\n", linhas);

    return 0;
}