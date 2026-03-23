#include <stdio.h>

int main(){
  int intervalValue, i = 1;

  scanf("%d", &intervalValue);

  for(; i <= intervalValue; i+=2){
    printf("%d\n", i);
  }

  return 0;
}



