#include <stdio.h>

int HTimePassed(int begin, int end){
  int HT = ((24-begin) + end);
  if(HT > 24)
    HT = HT-24;
  return HT;
}

int MTimePassed(int begin, int end){
  int MT = ((60-begin) + end);
  if(MT >= 60)
    MT = MT-60;
  return MT;
}

int main(){
  int beginTime[2], endTime[2], totalTime[2];

  scanf("%d", &beginTime[0]);
  scanf("%d", &beginTime[1]);
  scanf("%d", &endTime[0]);
  scanf("%d", &endTime[1]);

  totalTime[0] = HTimePassed(beginTime[0], endTime[0]);
  totalTime[1] = MTimePassed(beginTime[1], endTime[1]);
  if(beginTime[1] > endTime[1]){
    totalTime[0]--;
  }else if(beginTime[1] < endTime[1] && totalTime[0] == 24){
    totalTime[0] = 0;
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalTime[0],totalTime[1]);

  return 0;
}


