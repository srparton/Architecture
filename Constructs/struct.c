#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct testStruct{
  int x;
  char c;
};

int main(){
  struct testStruct test;
  test.x = 10;
  test.c = 'x';
  printf("struct int (test.x) %d\n", test.x);
  printf("struct char (test.c) %c\n", test.c);
}
