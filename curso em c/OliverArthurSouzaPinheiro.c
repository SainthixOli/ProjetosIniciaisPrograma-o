#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int tentativas = 0;
    int escolha, continuarOuNao;
    char codigo[10] = "MTMzNw==";
    
    
    srand(time(NULL));
    int numero_aleatorio = rand() % 21;

    
    printf("\nO SISTEMA ESTÁ SENDO ACESSADO SEM AUTORIZAÇÃO!\n");
    printf("CÓDIGO SUSPEITO DETECTADO -----> %s\n\n", codigo);
    
    printf("OPÇÕES:\n");
    printf("1 - VERIFICAR ALERTA\n");
    printf("3 - IGNORAR E SAIR\n");
    printf("Digite sua escolha: ");
    scanf("%d", &continuarOuNao);
    
    if(continuarOuNao == 3) {
        printf("\n---------------------\n");
        printf("    ENCERRADO\n");
        printf("---------------------\n");
        return 0;
    }

    
    while(tentativas < 3) {
        printf("\nTentativa %d de 3\n", tentativas + 1);
        printf("O CÓDIGO ESTÁ ENTRE 0 E 20!\n");
        printf("Digite seu palpite: ");
        scanf("%d", &escolha);

        
        if(escolha == numero_aleatorio) {
            printf("\n----------------------------------------------\n");
            printf("       SISTEMA LIVRE DE AMEAÇAS!\n");
            printf("----------------------------------------------\n");
            return 0;
        }
        else if(escolha < numero_aleatorio) {
            if(escolha == numero_aleatorio - 2) {
                printf("\nDICA: O código é maior que isso!\n");
                printf("      Você está muito perto!\n");
            } else {
                printf("\nDICA: O código é maior que %d\n", escolha);
            }
        }
        else if(escolha > numero_aleatorio) {
            if(escolha == numero_aleatorio + 2) {
                printf("\nDICA: O código é menor que isso!\n");
                printf("      Você está muito perto!\n");
            } else {
                printf("\nDICA: O código é menor que %d\n", escolha);
            }
        }
        
        tentativas++;
    }

    
    printf("\n----------------------------------------\n");
    printf("⚠️⚠️⚠️ ALERTA DE SEGURANÇA ⚠️⚠️⚠️\n");
    printf("████████████████████████████████\n");
    printf("█ ⚠️  SISTEMA INVADIDO! ⚠️      █\n");
    printf("█ Uma violação foi detectada.   █\n");
    printf("█ Dados podem estar comprometidos. █\n");
    printf("█ Ação imediata é necessária!   █\n");
    printf("████████████████████████████████\n");
    
    return 0;
}
