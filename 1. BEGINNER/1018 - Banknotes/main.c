#include <stdio.h>

int main(){
  int i, N, decreasedN, notes[2][7] = {{100, 50, 20, 10, 5, 2, 1},
                                       {0, 0, 0, 0, 0, 0, 0}};
  scanf("%d", &N);
  printf("%d\n", N);

  for(i = 0; i < 7; i++){
    decreasedN = N%notes[0][i];
    notes[1][i] = (N-decreasedN)/notes[0][i];
    N = decreasedN;
    printf("%d nota(s) de R$ %d,00\n", notes[1][i], notes[0][i]);
  }
  return 0;
}
