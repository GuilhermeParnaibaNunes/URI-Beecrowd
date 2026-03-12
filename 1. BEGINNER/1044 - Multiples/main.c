#include <stdio.h>

int areMultiples(int N1, int N2){
  if(N1 > N2){
    if(N1%N2 == 0){
      return 1;
    }else{
      return 0;
    }
  }else if(N2%N1 == 0){
      return 1;
    }else{
      return 0;
    }{
  }
}

int main(){
  int A, B;

  scanf("%d", &A);
  scanf("%d", &B);

  if(areMultiples(A, B)){
    printf("Sao Multiplos\n");
  }else{
    printf("Nao sao Multiplos\n");
  }

  return 0;
}



