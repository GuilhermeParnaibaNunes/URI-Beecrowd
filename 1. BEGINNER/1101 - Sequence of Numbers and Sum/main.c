#include <stdio.h>

void correctBeginEnd(int *nB, int *nE){
  int aux;

  if(*nE >= *nB)
    return;

  aux = *nB;
  *nB = *nE;
  *nE = aux;
}

void PrintSumOfConsecutiveNumbers(int nB, int nE){
  int sum = 0;

  for(int i = nB; i <= nE; i++){
    printf("%d ", i);
    sum+=i;
  }

  printf("Sum=%d\n", sum);
}

int main(){
  int M, N;

  scanf("%d", &M);
  scanf("%d", &N);

  while(M > 0 && N > 0){
    correctBeginEnd(&M, &N);
    PrintSumOfConsecutiveNumbers(M, N);

    scanf("%d", &M);
    scanf("%d", &N);
  }

  return 0;
}
