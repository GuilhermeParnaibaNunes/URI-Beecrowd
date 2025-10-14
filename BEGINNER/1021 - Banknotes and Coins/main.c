#include <stdio.h>
#include <string.h>

int main(){
  int N, decreasedN, notes[2][6] = {{100, 50, 20, 10, 5, 2},
                                       {0, 0, 0, 0, 0, 0}};
  int C, decreasedC, cents[2][6] = {{100, 50, 25, 10, 5, 1},
                                       {0, 0, 0, 0, 0, 0}};
  char X[10], nX[8] = {}, cX[3] = {};
  int Pindex;

  scanf("%s", &X);
  Pindex = (int)(strchr(X, '.') - X);
  strncpy(nX, X, Pindex);
  nX[8] = '\0';
  N = atoi(nX);
  strncpy(cX, X + Pindex + 1, 2);
  cX[3] = '\0';
  C = atoi(cX);

  printf("NOTAS:\n");
  for(int i = 0; i < 6; i++){
    decreasedN = N%notes[0][i];
    notes[1][i] = (N-decreasedN)/notes[0][i];
    N = decreasedN;
    printf("%d nota(s) de R$ %d.00\n", notes[1][i], notes[0][i]);
  }

  C+=(N*100);
  printf("MOEDAS:\n");
  for(int i = 0; i < 6; i++){
    decreasedC = C%cents[0][i];
    cents[1][i] = (C-decreasedC)/cents[0][i];
    C = decreasedC;
    printf("%d moedas(s) de R$ %.2f\n", cents[1][i], cents[0][i]/100.0);
  }
  return 0;
}
