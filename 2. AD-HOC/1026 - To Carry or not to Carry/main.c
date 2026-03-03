#include <stdio.h>

intToBinary(int iN){


}

int main(){
  int n;
  char binaryN32b[33];
  scanf("%d", &n);
  binaryN32b = intToBinary(n);

  printf("\t### %d = %s\n", n, binaryN32b);
  return 0;
}


//Int to binary(char[])
//Binary(char[]) to int
//Wrong binary sum
//Odd numbers always have 1 (at the end)
//Divide the number and the rest of the division by 2...
//... repeatdly, until it turns to one, if that works, then...
//... it is a 2 multiple, log2X = Y (X = value, 2 = base and Y = position in array)...
//... if it doesn't turn to one, then...
//...
