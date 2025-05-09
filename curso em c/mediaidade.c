#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}  // Lê e descarta caracteres até encontrar \n ou EOF
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);  // Lê a linha
    strtok(buffer, "\n");          // Remove o \n
}

int main()
{
   char nome1[50], nome2[50];
   int idade1, idade2;
    double media;

    printf("\nEscreva o primeiro nome: ");
    ler_texto(nome1, 50);
    printf("\nEscreva a primeira idade: ");
    scanf("%d", &idade1);

    limpar_entrada();
    printf("\nEscreva o segundo nome: ");
    ler_texto(nome2, 50);
    printf("\nEscreva a segunda idade: ");
    scanf("%d", &idade2);

    media = (double) (idade1 + idade2) / 2.0;

    printf("\nA media de idade de %s e %s eh igual a %.1lf.", nome1, nome2, media);

    return 0;
}