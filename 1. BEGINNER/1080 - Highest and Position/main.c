#include <stdio.h>

#define TOTAL 5

int main(){
  int numbers[TOTAL];
  int totalEven, totalOdd, positiveTotal, negativeTotal;
  totalEven = totalOdd = positiveTotal = negativeTotal = 0;

  for(int i = 0; i < TOTAL; i++){
    scanf("%d", &numbers[i]);

    if(numbers[i]%2 == 0)
      totalEven++;
    else
      totalOdd++;
    if(!numbers[i])
      continue;
    else if(numbers[i] > 0)
      positiveTotal++;
    else
      negativeTotal++;
  }

  printf("%d valor(es) par(es)\n"
         "%d valor(es) impar(es)\n"
         "%d valor(es) positivo(s)\n"
         "%d valor(es) negativo(s)\n"
         "", totalEven, totalOdd, positiveTotal, negativeTotal);

  return 0;
}
