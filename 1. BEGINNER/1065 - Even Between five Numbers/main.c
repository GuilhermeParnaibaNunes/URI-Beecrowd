#include <stdio.h>

#define TOTAL 5

int main(){
  int numbers[TOTAL];
  int totalEven = 0;

  for(int i = 0; i < TOTAL; i++){
    scanf("%d", &numbers[i]);
    if(numbers[i]%2 == 0)
      totalEven++;
  }

  printf("%d valores pares\n", totalEven);
  return 0;
}



