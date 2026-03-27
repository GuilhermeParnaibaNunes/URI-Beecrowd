#include <stdio.h>

int main(){
  int N, nC, nR, nS, nAux, total;
  char select;
  nC = nR = nS = nAux = total = 0;

  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d ", &nAux);
    scanf("%c", &select);
    total += nAux;

    switch(select){
      case 'C':
        nC += nAux;
        break;
      case 'R':
        nR += nAux;
        break;
      case 'S':
        nS += nAux;
        break;
    }
  }

  printf("Total: %d cobaias\n"
         "Total de coelhos: %d\n"
         "Total de ratos: %d\n"
         "Total de sapos: %d\n"
         "Percentual de coelhos: %.2f %%\n"
         "Percentual de ratos: %.2f %%\n"
         "Percentual de sapos: %.2f %%\n"
  "", total, nC, nR, nS, (((float)nC/total)*100), (((float)nR/total)*100), (((float)nS/total)*100));

  return 0;
}
