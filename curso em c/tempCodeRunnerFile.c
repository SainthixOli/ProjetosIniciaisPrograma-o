#include <stdio.h>


int main()
{

    int N;
    double a = 0;
    int idades[N];
    double altura[N];
    char nomes[50][N];
    
    printf("Quantas pessoas voce quer digitar: \n");
    scanf("%d", &N);
    
    do{
        for(int a = 0; a < N; a++) {
            printf("Digite o nome da pessoa %d: \n", a + 1);
            scanf("%s", &nomes[50][a]);
                
                for(int b = 0; b < N; b++) {
                    printf("Digite a altura da pessoa %d: \n", b + 1);
                    scanf("%lf", &altura[b]);
                    
                    for(int c = 0; c < N; c++) {
                            printf("Digite a idade da pessoa %d:", c + 1);
                            scanf("%d", &idades[c]);
                            a++;
                    }
                }
        }
    } while(a < N);




    return 0;
}