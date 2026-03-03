#include <stdio.h>

int main(){
  float A, B, C;
  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);
  printf("TRIANGULO: %.3f\n"
         "CIRCULO: %.3f\n"
         "TRAPEZIO: %.3f\n"
         "QUADRADO: %.3f\n"
         "RETANGULO: %.3f\n"
         "", (A*C)/2, 3.14159*(C*C), ((A+B)*C)/2, B*B, A*B);
  return 0;
}
