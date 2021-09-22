#include <stdio.h>
#include <string.h>

int main(){
  int i = 1;
  int x = 1;
  while (i <= 10){

    x = x * i;
    i++;
  }
  printf("10 factorial is %d\n", x);
  return 0;
}
