#include <stdio.h>

/* This function takes an integer as an input and returns its square
*/

int square(int a){
  int b = a * a;
  return b;
}

int main() {
  printf("Squaring some integers\n\n");
  printf("Square of 3:\t%d\n", square(3));

  int res = square(142);
  printf("Square of 142:\t%d\n", res);
  return 0;
}
