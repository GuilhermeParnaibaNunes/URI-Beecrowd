#include <stdio.h>

int main(){
  int aux, highest = 0, hPos = 0;

  for(int i = 1; i <= 100; i++){
    scanf("%d", &aux);
    if(aux > highest){
      highest = aux;
      hPos = i;
    }
  }

    printf("%d\n%d\n", highest, hPos);
  return 0;
}
