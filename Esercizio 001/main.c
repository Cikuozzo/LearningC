#include <stdio.h>

int main(){

  int x, y;

  printf("Inserire il primo numero: ");
  scanf("%d", &x);

  printf("Inserire il secondo numero: ");
  scanf("%d", &y);

  int media = (x + y)/2;

  printf("La media tra i due numeri corrisponde a: %d ", media);

  return 0;
  
}
