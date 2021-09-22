#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  short int si = (unsigned short int)~0 >> 1;
  printf("max short int %hd\n", si);
  unsigned short int usi = (unsigned short int)~0;
  printf("max unsigned short int %hu\n", usi);
  unsigned int ui = (unsigned int)~0;
  printf("max unsigned int %u\n", ui);
  int i= (unsigned int)~0 >> 1;
  printf("max int %d\n", i);
  long int li = (unsigned long int)~0 >> 1;
  printf("max long int %ld\n", li);
  unsigned long int uli = (unsigned long int)~0;
  printf("max unsigned long int %lu\n", uli);
  float f = 1.2345678;
  printf("example of float %f\n", f);
  char c = 'c';
  printf("example of char %c\n", c);
  return 0;
}
