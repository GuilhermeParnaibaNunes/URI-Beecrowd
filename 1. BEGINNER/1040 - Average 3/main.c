#include <stdio.h>

float Average(double *N){
  float A = ((2*N[0])+(3*N[1])+(4*N[2])+N[3])/10;
  return A;
}

int main(){
  double N[4], average, NExame;

  scanf("%lf", &N[0]);
  scanf("%lf", &N[1]);
  scanf("%lf", &N[2]);
  scanf("%lf", &N[3]);

  average = Average(N);

  printf("Media: %.1f\n", average);

  if(average >= 7.0){
    printf("Aluno aprovado.\n");
  } else if(average < 5.0){
    printf("Aluno reprovado.\n");
  } else{
    printf("Aluno em exame.\n");
    scanf("%lf", &NExame);
    printf("Nota do exame: %.1f\n", NExame);
    average = (average+NExame)/2;
    if(average >= 5.0){
      printf("Aluno aprovado.\n");
    } else {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", average);
  }

  return 0;
}


