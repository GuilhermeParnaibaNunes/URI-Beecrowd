#include <stdio.h>

int main(){
  char name[256];
  double fixedSalary, salesTotal;
  scanf("%s", &name);
  scanf("%lf", &fixedSalary);
  scanf("%lf", &salesTotal);
  printf("TOTAL = R$ %.2lf\n", fixedSalary+(0.15*salesTotal));
  return 0;
}
