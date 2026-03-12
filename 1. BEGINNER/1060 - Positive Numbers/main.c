#include <stdio.h>

#define TOTAL 6

int PositiveCounting(float *arr){
  int total = 0;
  for(int i = 0; i < TOTAL; i++){
    if(arr[i] > 0)
      total++;
  }

  return total;
}

int main(){
  float numbers[TOTAL];

  for(int i = 0; i < TOTAL; i++){
    scanf("%f", &numbers[i]);
  }

  printf("%d valores positivos\n", PositiveCounting(numbers));
  return 0;
}
