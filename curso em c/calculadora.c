#include <stdio.h>


int main(){

    int n1, n2, resultado;
    char o; 
    
    printf("Bem vindo a calculadora.\n");
    printf("\nEscolha a operçao que voce quer fazer: \n");
    scanf(" %c", &o);
    
    printf("\nDigite os numeros: \n");
    scanf("%d", &n1); 
    scanf("%d", &n2);

    switch(o){
    case '+':
        resultado = n1 + n2;
        break;
    case '-':
        resultado = n1 - n2;
        break;
    case '*':
        resultado = n1 * n2;
        break;
    case '/':
        resultado = n1 / n2;
        break;
    default:
    printf("Operador inválido!");
    }
    
    printf("\n%d %c %d\n", n1, o, n2);
    printf("Resultado = %d\n", resultado);

    return 0;
}