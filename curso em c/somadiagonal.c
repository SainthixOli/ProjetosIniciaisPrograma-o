#include <stdio.h>

int main(){

    int mat[3][3], soma = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\nDigite o numero [%d, %d]: \n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        soma += mat[i][i];
    }
    
    printf("\nSoma = %d\n", soma);




    return 0;
}