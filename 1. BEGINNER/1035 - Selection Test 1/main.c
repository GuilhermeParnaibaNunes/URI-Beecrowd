#include <stdio.h>
#define true 1
#define false 0


int isGreater(int n1, int n2){
  return (n1>n2?true:false);
}

int isPositive(int n){
  return (n>0?true:false);
}

int isEven(int n){
  return (n%2==0?true:false);
}

int main(){
  int A, B, C, D;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);

  if(isGreater(B, C))
    if(isGreater(D, A))
      if(isGreater(C+D, A+B))
        if(isPositive(C))
          if(isPositive(D))
            if(isEven(A)){
              printf("Valores aceitos\n");
              return 0;
            }

  printf("Valores nao aceitos\n");
  return 0;
}
