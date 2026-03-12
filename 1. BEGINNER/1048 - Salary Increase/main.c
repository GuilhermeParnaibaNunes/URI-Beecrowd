#include <stdio.h>

typedef struct Salary {
    float totalSalary;
    float readjustEarnedAmount;
    float readjustRate;
} t_Salary;

t_Salary Readjust(float initialS){
  t_Salary finalS;
  if(initialS <= 400){
    finalS.readjustRate = 0.15;
  }else if(initialS <= 800){
    finalS.readjustRate = 0.12;
  }else if(initialS <= 1200){
    finalS.readjustRate = 0.1;
  }else if(initialS <= 2000){
    finalS.readjustRate = 0.07;
  }else{
    finalS.readjustRate = 0.04;
  }

  finalS.readjustEarnedAmount = initialS*finalS.readjustRate;
  finalS.totalSalary = initialS + finalS.readjustEarnedAmount;

  return finalS;
}

int main(){
  float initialSalary;


  scanf("%f", &initialSalary);

  t_Salary salary = Readjust(initialSalary);

  printf("Novo salario: %.2f\n"
         "Reajuste ganho: %.2f\n"
         "Em percentual: %.f %%\n"
         "", salary.totalSalary, salary.readjustEarnedAmount, (100*salary.readjustRate));

  return 0;
}



