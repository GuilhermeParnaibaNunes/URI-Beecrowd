#include <stdio.h>

#define TOTAL 6

int positiveCount(float *numbers){
  int pCount = 0;
  for(int i = 0; i < TOTAL; i++){
    if(numbers[i] > 0){
      pCount++;
    }
  }

  return pCount;
}

double averageCalc(float *numbers, int validTotal){
  double totalValue = 0;
  for(int i = 0; i < TOTAL; i++){
    totalValue += numbers[i];
  }

  return totalValue/validTotal;
}


int main(){
  float numbers[TOTAL];
  int positiveTotal;

  for(int i = 0; i < TOTAL; i++){
    scanf("%f", &numbers[i]);
    if(numbers[i] < 0)
      numbers[i] = 0;
  }

  positiveTotal = positiveCount(numbers);

  printf("%d valores positivos\n", positiveTotal);
  printf("%.1lf\n", averageCalc(numbers, positiveTotal));

  return 0;
}




