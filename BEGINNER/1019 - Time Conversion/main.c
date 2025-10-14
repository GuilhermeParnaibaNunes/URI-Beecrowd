#include <stdio.h>

#define NtoH 3600
#define NtoM 60
#define NtoS 1

int main(){
  int N, decreasedN, conversion[2][3] = {{NtoH, NtoM, NtoS}, {0, 0, 0}};

  scanf("%d", &N);
  for(int i = 0; i < 3; i++){
    decreasedN = N%conversion[0][i];
    conversion[1][i] = (N-decreasedN)/conversion[0][i];
    N = decreasedN;
  }
  printf("%d:%d:%d\n", conversion[1][0], conversion[1][1], conversion[1][2]);
  return 0;
}
