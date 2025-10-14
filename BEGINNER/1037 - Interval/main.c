#include <stdio.h>

int main(){
    float N;

    scanf("%f", &N);

    if(N<0 || N>100)
      printf("Fora de intervalo\n");
    else if(N<=25)
      printf("Intervalo [0,25]\n");
    else if(N<=50)
      printf("Intervalo (25,50]\n");
    else if(N<=75)
      printf("Intervalo (50,75]\n");
    else if(N<=100)
      printf("Intervalo (75,100]\n");

    return 0;
}
