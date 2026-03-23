#include <stdio.h>

int main(){
  int N, i = 2;

  scanf("%d", &N);
  if(N%2 != 0)
    N++;


  for(; i <= N; i+=2){
    printf("%d^2 = %d\n", i, i*i);
  }

  return 0;
}



