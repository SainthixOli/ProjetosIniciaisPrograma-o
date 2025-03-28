#include <stdio.h>
#include <string.h>

// Método Limpar Entrada:
// Este método serve para limpar o buffer de entrada, descartando caracteres indesejados.
// Ele lê todos os caracteres do buffer até encontrar uma quebra de linha (\n) ou o fim do arquivo (EOF).
// Dentro do método, criamos uma variável char chamada 'c' para armazenar temporariamente cada caractere lido.
// Se o caractere lido for \n ou EOF, ele não será considerado como uma variável char válida.
// Em outras palavras, o método "limpa" o buffer, descartando qualquer caractere que esteja lá,
// para que o próximo scanf ou getchar funcione corretamente.
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}  // Lê e descarta caracteres até encontrar \n ou EOF
}

// Método ler_texto:
// Lê uma linha de texto do usuário e remove a quebra de linha (\n) no final.
// - buffer: Onde o texto será armazenado.
// - length: Tamanho máximo do buffer.
// Usa fgets para ler a linha e strtok para remover o \n.
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);  // Lê a linha
    strtok(buffer, "\n");          // Remove o \n
}

int main()
{
    int idade1, idade2;
    char nome1[50], nome2[50];
    
    printf("Digite a idade 1: ");
    scanf("%d", &idade1);
    limpar_entrada();
    printf("Digite o nome 1: ");
    ler_texto(nome1, 50);

    printf("Digite a idade 2: ");
    scanf("%d", &idade2);
    limpar_entrada();
    printf("Digite o nome 2: ");
    ler_texto(nome2, 50);

    printf("O nome da pessoa um é %s e a idade é %d\n", nome1, idade1);
    printf("O nome da pessoa dois é %s e a idade é %d\n", nome2, idade2);
    
    return 0;
}