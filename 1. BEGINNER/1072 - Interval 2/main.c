#include <stdio.h>

int main(){
  int totalOfValues, insideInterval, outsideInterval, auxValue;
  insideInterval = outsideInterval = 0;

  scanf("%d", &totalOfValues);

  for(int i = 0; i < totalOfValues; i++){
    scanf("%d", &auxValue);
    if(auxValue < 10 || auxValue > 20)
      outsideInterval++;
    else
      insideInterval++;
  }

  printf("%d in\n"
         "%d out\n", insideInterval, outsideInterval);

  return 0;
}



