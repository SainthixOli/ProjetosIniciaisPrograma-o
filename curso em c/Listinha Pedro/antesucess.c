#include <stdio.h>

int main()
{
  int N, Nan,Nsu;

  printf("\nEscreva um numero inteiro: \n");
  scanf("%d", &N);

  Nan = N + 1;
  Nsu = N -1;

  printf("\nO numero antecessor é: %d\n", Nan);
  printf("\nO numero sucessor é: %d\n", Nsu);

  printf("\n");



    return 0;
}