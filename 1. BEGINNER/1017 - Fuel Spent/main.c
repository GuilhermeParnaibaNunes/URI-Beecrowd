#include <stdio.h>

#define KmPerLiters 12.0

double LitersConsumed(int h, int kmph, double kmpl){
  return (h*kmph)/kmpl;
}

int main(){
  int H, kmPerH;
  scanf("%d", &H);
  scanf("%d", &kmPerH);

  printf("%.3lf\n", LitersConsumed(H, kmPerH, KmPerLiters));
  return 0;
}
