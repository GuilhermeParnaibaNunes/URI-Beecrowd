#include <stdio.h>

#define NtoY 365
#define NtoM 30
#define NtoD 1

int main(){
  int N, decreasedN, conversion[2][3] = {{NtoY, NtoM, NtoD}, {0, 0, 0}};

  scanf("%d", &N);
  for(int i = 0; i < 3; i++){
    decreasedN = N%conversion[0][i];
    conversion[1][i] = (N-decreasedN)/conversion[0][i];
    N = decreasedN;
  }
  printf("%d ano(s)\n"
         "%d mes(es)\n"
         "%d dia(s)\n"
         "", conversion[1][0], conversion[1][1], conversion[1][2]);
  return 0;
}
