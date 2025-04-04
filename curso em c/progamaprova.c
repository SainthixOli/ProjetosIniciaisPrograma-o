#include <stdio.h>

int main(){

    int n, numero = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            numero += j * 2;
        }
    }

    printf("%d", numero);





    return 0;

}