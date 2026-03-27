#include <stdio.h>

void printNumberFormatter(int number){
  if(number%10 == 0)
    printf("%d", number/10);
  else
    printf("%.1lf", number/10.0);
}

int main(){
  int i = 0, j = 10;

  while(i <= 20){
    for(int k = 0; k < 3; k++){
      printf("I="), printNumberFormatter(i);
      printf(" J="), printNumberFormatter(j);
      puts("");
      j+=10;
    }
    i+=2;
    j-=28;
  }

  return 0;
}
