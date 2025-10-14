#include <stdio.h>

int main(){
  int eNumber, eWorkedHours;
  float eAmountPerHour;
  scanf("%d", &eNumber);
  scanf("%d", &eWorkedHours);
  scanf("%f", &eAmountPerHour);
  printf("NUMBER = %d\n"
         "SALARY = U$ %.2f\n", eNumber, eWorkedHours*eAmountPerHour);
  return 0;
}
