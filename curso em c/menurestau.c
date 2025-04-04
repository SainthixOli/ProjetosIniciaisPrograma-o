#include <stdio.h>

int main(){

    char opcao;

    printf("Digite H para Hamburguer. \nDigite P para Pizza.\nDigite S para Salada.\n");
    scanf(" %c", &opcao);

    switch(opcao){
    case 'H':
        printf("\nVoce escolheu o hamburguer.\n");
        break;
    case 'P': 
        printf("\nVoce escolheu pizza.\n");
        break;
    case 'S': 
        printf("\nVoce escolheu salada\n");
        break;
    default:
        printf("\nOpcao invalida.\n");
    }

    return 0;
}