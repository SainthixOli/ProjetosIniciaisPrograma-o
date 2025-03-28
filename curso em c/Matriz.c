#include <stdio.h>


int main() {
    
    int N, M;

    printf("Quantas linhas voce quer na matriz? ");
    scanf("%d", &N);

    printf("Quantas colunas voce quer na matriz? ");
    scanf("%d", &M);
    
    int mat[N][M];

    for(int i = 1; i < N; i++) {
        for(int j = 1; j < M; j++) {
            printf("Elmento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz digitada!\n");

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("%d", mat[i][j]);
        }
    printf("\n");
    }

    return 0;
}