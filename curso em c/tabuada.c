#include <stdio.h>

int main() {

    int n1, resul, cont;

    printf("Digite o numero que vc quer saber a tabuada: \n");
    scanf("%d", &n1);

    for(int i = 1; i <= 10; i++) {
        resul = n1 * i;
        printf("%d x %d = %d\n", n1, i, resul);
    }



    return 0;
}