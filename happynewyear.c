#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void countdown(int time){
  for (int i = time; i > 0; i--){
    printf("%d\n", i);
    sleep(1);
  }
  sleep(1);
  printf("Happy New Year!\n");
}

int main(int argc, char *argv[]){
  int time = atoi(argv[1]);
  countdown(time);
  return 0;
}
