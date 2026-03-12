#include <stdio.h>

void SortDecreasingly(float *L){
  int change = 1, i;
  float aux;

  while(change){
    change = 0;
    for(i = 0; i < 2; i++){
      aux = L[i];
      if(L[i+1] > L[i]){
        L[i] = L[i+1];
        L[i+1] = aux;
        change = 1;
      }
    }
  }
}


int main(){
  float L[3];

  scanf("%f", &L[0]);
  scanf("%f", &L[1]);
  scanf("%f", &L[2]);

  SortDecreasingly(L);

  if(L[0] >= (L[1] + L[2])){
    printf("NAO FORMA TRIANGULO\n");
  }else if((L[0]*L[0]) == ((L[1]*L[1]) + (L[2]*L[2]))){
    printf("TRIANGULO RETANGULO\n");
  }else if((L[0]*L[0]) > ((L[1]*L[1]) + (L[2]*L[2]))){
    printf("TRIANGULO OBTUSANGULO\n");
  }else if((L[0]*L[0]) < ((L[1]*L[1]) + (L[2]*L[2]))){
    printf("TRIANGULO ACUTANGULO\n");
  }

  if(L[0] == L[1] || L[0] == L[2] || L[1] == L[2]){
    if(L[0] != L[2] || L[0] != L[1] || L[1] != L[2])
      printf("TRIANGULO ISOSCELES\n");
    else
      printf("TRIANGULO EQUILATERO\n");
  }

  return 0;
}


