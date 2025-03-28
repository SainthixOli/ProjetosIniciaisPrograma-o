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

int main()
{
    int idade;
    double salario, altura;
    char sexo;
    char nome[30];

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o salario: ");
    scanf("%lf", &salario);

    printf("Digite a altura: ");
    scanf("%lf", &altura);
    
    // ATENÇÃO: Use um espaço antes do %c no scanf para evitar que ele capture o \n do buffer.
    // Exemplo: scanf(" %c", &variavel);
    printf("Digite o sexo apenas a sigla: ");
    scanf(" %c", &sexo);
    
    limpar_entrada();
    printf("Digite o nome: ");
    fgets(nome, 30, stdin);

    printf("\nIDADE = %d\nSALARIO = %lf\nALTURA = %lf\nSEXO = %c\nNOME = %s", idade, salario, altura, sexo, nome);

    return 0;
}
