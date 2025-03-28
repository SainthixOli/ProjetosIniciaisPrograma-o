#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}  // Lê e descarta caracteres até encontrar \n ou EOF
}

int main()
{
    int N, a;
    double media, soma, porc;
    
    printf("Quantas pessoas voce quer digitar: \n");
    scanf("%d", &N);
    
    int idades[N];
    double altura[N];
    char nomes[N][50];  
    
    for(int i = 0; i < N; i++) {
        limpar_entrada();
        printf("Digite o nome da pessoa %d: \n", i + 1);
        scanf("%49s", nomes[i]);  
        
        printf("Digite a altura da pessoa %d: \n", i + 1);
        scanf("%lf", &altura[i]);
                
        printf("Digite a idade da pessoa %d: \n", i + 1);
        scanf("%d", &idades[i]);
                
    }

    
    for(int i = 0; i < N; i++) {
        printf("\n\nNOME: %s\nALTURA: %.2lf\nIDADE: %d\n", nomes[i], altura[i], idades[i]);
    }

    for(int i = 0; i < N; i++) {
        soma += altura[i];
    }
    media = soma / N;
    
    printf("\n\nMedia de altura: %.2lf\n", media);
    
    a = 0;
    for(int i = 0; i < N; i++) {
        if(idades[i] < 16) {
            a++;
        }
    }
    porc = ((double) a / N) * 100.0;
    printf("\nA porcentagem de pessoas com menos de 16 anos é %.2lf %%.\n", porc);

    for(int i = 0; i < N; i++) {
        if(idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }
    
    return 0;
}