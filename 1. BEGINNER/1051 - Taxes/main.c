#include <stdio.h>

float taxesCalculation(float salary){
  float taxes = 0;
  if(salary > 2000){
    salary -= 2000;
    if(salary >= 1000){
      taxes = 80; //1000 * 8%
      salary -= 1000;
      if(salary >= 1500){
        taxes += 270; //1500 * 18%
        salary -= 1500;
        taxes += salary * 0.28;
      }else{
        taxes += salary*0.18;
      }
    }else{
      taxes = salary*0.08;
    }
  }

  return taxes;
}

int main(){
  float salary, taxes;

  scanf("%f", &salary);

  taxes = taxesCalculation(salary);

  if(taxes)
    printf("R$ %.2f\n", taxes);
  else
    printf("Isento\n");

  return 0;
}




