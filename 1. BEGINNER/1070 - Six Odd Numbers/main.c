#include <stdio.h>

#define TOTAL 6

int main(){
  int initialValue, i = 0;

  scanf("%d", &initialValue);
  if(initialValue %2 == 0)
    initialValue++;

  for(; i < TOTAL*2; i+=2){ //Since i is incresing times 2, the same must occur to the limit counter*
    printf("%d\n", initialValue+i); //*an odd choice, I would say
  }

  return 0;
}



