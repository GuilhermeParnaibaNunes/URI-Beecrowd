#include <stdio.h>
#include <math.h>

int main(){
  double A, B, C, D, x1, x2;

  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);

  if(A){
    D = ((B*B)-(4*A*C));
    if(D>=0){
      x1 = ((-B+sqrt(D))/(2*A));
      x2 = ((-B-sqrt(D))/(2*A));
      printf("R1 = %.5lf\n"
             "R2 = %.5lf\n", x1, x2);
      return 0;
    }
  }

  printf("Impossivel calcular\n");
  return 0;
}
