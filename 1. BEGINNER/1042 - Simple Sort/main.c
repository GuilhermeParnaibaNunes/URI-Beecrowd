#include <stdio.h>

#define MAX 3

void PrintIArray(int *Arr){
  for(int i = 0; i < MAX; i++){
    printf("%d\n", Arr[i]);
  }
}

void ShiftRightArr(int *Arr, int pos){ //pos = to be free pos
  int aux;
  for(int i = MAX-1; i > pos; i--){
    aux = Arr[i-1];
    Arr[i] = aux;
  }
}

void Sort(int *N, int *sorted){
  //Insere o primeiro valor na primeira posição
  //Avança para o próximo valor
  //Compara valor atual com os outros em ordem
  //Shift
  int aux;
  sorted[0] = N[0];
  for(int i = 1; i < MAX; i++){
    for(int j = 0; j < i; j++){
      if(N[i] < sorted[j]){
        ShiftRightArr(sorted, j);
        sorted[j] = N[i];
        break;
      }else if(j == i-1){
        sorted[i] = N[i];
      }
    }
  }
}

int main(){
  int N[MAX], sortedN[MAX];

  for(int i = 0; i < MAX; i++){
    scanf("%d", &N[i]);
  }

  Sort(N, sortedN);

  PrintIArray(sortedN);
  puts("");
  PrintIArray(N);

  return 0;
}


