#include <stdio.h>

int TimePassed(int begin, int end){
  int TT = ((24-begin) + end);
  if(TT > 24)
    TT = TT-24;
  return TT;
}

int main(){
  int beginTime, endTime, totalTime;

  scanf("%d", &beginTime);
  scanf("%d", &endTime);

  totalTime = TimePassed(beginTime, endTime);
  printf("O JOGO DUROU %d HORA(S)\n", totalTime);

  return 0;
}


