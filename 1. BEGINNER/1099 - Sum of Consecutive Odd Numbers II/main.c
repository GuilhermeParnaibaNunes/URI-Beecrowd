#include <stdio.h>

void correctBeginEnd(int *nB, int *nE){
  int aux;

  if(*nE >= *nB)
    return;

  aux = *nB;
  *nB = *nE;
  *nE = aux;
}

int SumOfConsecutiveOddNumbers(int nB, int nE){
  int sum = 0;
  nB++;

  if(nB%2 == 0){
    nB++;
  }

  for(int i = nB; i < nE; i+=2){
    sum+=i;
  }

  return sum;
}

int main(){
  int N, nBegin, nEnd, total;

  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &nBegin);
    scanf("%d", &nEnd);

    correctBeginEnd(&nBegin, &nEnd);
    total = SumOfConsecutiveOddNumbers(nBegin, nEnd);

    printf("%d\n", total);
  }

  return 0;
}
