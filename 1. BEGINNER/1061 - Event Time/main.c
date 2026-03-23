#include <stdio.h>

#define DAY 0
#define HOUR 1
#define MIN 2
#define SEC 3

int DTimePassed(int begin, int end){
  int DT = (end-begin);
  if(!DT)
    return DT;
  return DT;
}

int HTimePassed(int begin, int end){
  int HT = ((24-begin) + end);
  if(HT >= 24)
    HT = HT-24;
  return HT;
}

int MTimePassed(int begin, int end){
  int MT = ((60-begin) + end);
  if(MT >= 60)
    MT = MT-60;
  return MT;
}

int STimePassed(int begin, int end){
  int ST = ((60-begin) + end);
  if(ST >= 60)
    ST = ST-60;
  return ST;
}

int main(){
  int beginTime[4], endTime[4], totalTime[4];

  scanf("Dia %d", &beginTime[DAY]);
  scanf("\n%d", &beginTime[HOUR]);
  scanf(" : %d", &beginTime[MIN]);
  scanf(" : %d", &beginTime[SEC]);
  scanf("\nDia %d", &endTime[DAY]);
  scanf("\n%d", &endTime[HOUR]);
  scanf(" : %d", &endTime[MIN]);
  scanf(" : %d", &endTime[SEC]);

  totalTime[DAY] = DTimePassed(beginTime[DAY], endTime[DAY]);
  totalTime[HOUR] = HTimePassed(beginTime[HOUR], endTime[HOUR]);
  totalTime[MIN] = MTimePassed(beginTime[MIN], endTime[MIN]);
  totalTime[SEC] = STimePassed(beginTime[SEC], endTime[SEC]);

  if(endTime[HOUR] > beginTime[HOUR] ||
     endTime[HOUR] == beginTime[HOUR] && endTime[MIN] > beginTime[MIN] ||
     endTime[HOUR] == beginTime[HOUR] && endTime[MIN] == beginTime[MIN] &&
     endTime[SEC] >= beginTime[SEC]){ //Working on the exceed day
  } else if(totalTime[DAY]){
    totalTime[DAY]--;
  }

  if(endTime[MIN] > beginTime[MIN] ||
     endTime[MIN] == beginTime[MIN] && endTime[SEC] >= beginTime[SEC]){ //Working on the exceed hour

  }else if(totalTime[HOUR]){
    totalTime[HOUR]--;
  }else{
    totalTime[HOUR] = 23;
  }

  if(endTime[SEC] >= beginTime[SEC]){ //Working on the exceed minute
  }else if(totalTime[MIN]){
    totalTime[MIN]--;
  }else{
    totalTime[MIN] = 59;
  }

  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n"
         "", totalTime[DAY],totalTime[HOUR], totalTime[MIN], totalTime[SEC]);

  return 0;
}



