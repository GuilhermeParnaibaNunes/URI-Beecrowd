#include <stdio.h>

int main(){
  int X, Y;
  float total;

  scanf("%d", &X);
  scanf("%d", &Y);

  switch (X){
    case 1:
      total = Y*4;
      break;
    case 2:
      total = Y*4.50;
      break;
    case 3:
      total = Y*5;
      break;
    case 4:
      total = Y*2;
      break;
    case 5:
      total = Y*1.50;
      break;
  }

  printf("Total: R$ %.2f", total);

  return 0;
}

