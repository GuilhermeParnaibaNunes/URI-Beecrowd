#include <stdio.h>

int main(){
  int N, number;

  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &number);

    if(!number)
      printf("NULL\n");
    else if(number%2 == 0)
      if(number > 0)
        printf("EVEN POSITIVE\n");
      else
        printf("EVEN NEGATIVE\n");
    else
      if(number > 0)
        printf("ODD POSITIVE\n");
      else
        printf("ODD NEGATIVE\n");
  }

  return 0;
}
