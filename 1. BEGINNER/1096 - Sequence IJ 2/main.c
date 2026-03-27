#include <stdio.h>

int main(){
  int i = 1, j = 7;

  for(; i < 10; j--){
    if(j < 5){
      j = 7;
      if(i == 9)
        break;
      else
        i+=2;
    }

    printf("I=%d J=%d\n", i, j);
  }

  return 0;
}
