#include <stdio.h>

int main(){
  int startV, endV, auxV, i, somatory = 0;

  scanf("%d", &startV);
  scanf("%d", &endV);

  if(startV > endV){
    auxV = startV;
    startV = endV;
    endV = auxV;
  }

  if(startV %2 == 0)
    startV++;
  else
    startV+=2;

  for(i = startV; i < endV; i+=2){
    somatory+=i;
  }

  printf("%d\n", somatory);

  return 0;
}



