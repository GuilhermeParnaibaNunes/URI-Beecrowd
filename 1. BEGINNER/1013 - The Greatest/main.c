#include <stdio.h>
#include <math.h>

int RelativeGreatest(int n1, int n2){
  return ((n1+n2)+abs(n1-n2))/2;
}

int main(){
  int A, B, C;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  printf("%d eh o maior\n", RelativeGreatest(RelativeGreatest(A, B), C));
  return 0;
}
