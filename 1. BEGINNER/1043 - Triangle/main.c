#include <stdio.h>

double TrianglePerimeter(float l1, float l2, float l3){
  return l1+l2+l3;
}

int IsTriangle(float l1, float l2, float l3){
  if(l1 >= (l2+l3) || l2 >= (l1+l3) || l3 >= (l1+l2))
    return 0;
  else
    return 1;
}

double TrapeziumArea(float B, float b, float H){
  return ((B+b)*H)/2;
}

int main(){
  float l[3];

  scanf("%f", &l[0]);
  scanf("%f", &l[1]);
  scanf("%f", &l[2]);

  if(IsTriangle(l[0], l[1], l[2])){
    printf("Perimetro = %.1f\n"
           "", TrianglePerimeter(l[0], l[1], l[2]));
  }else{
    printf("Area = %.1f\n"
           "", TrapeziumArea(l[0], l[1], l[2]));
  }

  return 0;
}


