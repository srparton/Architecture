#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  short int* ptr_si;
  short int si = (unsigned short int)~0 >> 1;
  ptr_si = &si;
  printf("max short int %hd\n", si);
  printf("address of si %hd\n", &si);
  printf("max short int address stored in ptr_si %hd\n", ptr_si);
  printf("max short int value stored in ptr_si %hd\n\n", *ptr_si);
  
  unsigned short int* ptr_usi;
  unsigned short int usi = (unsigned short int)~0;
  ptr_usi = &usi;
  printf("max unsigned short int %hu\n", usi);
  printf("address of usi %hd\n", &usi);
  printf("address stored in ptr_usi %hd\n", ptr_usi);
  printf("value stored in ptr_usi %hd\n\n", *ptr_usi);
  
  unsigned int* ptr_ui;
  unsigned int ui = (unsigned int)~0;
  ptr_ui = &ui;
  printf("max unsigned short int %hu\n", ui);
  printf("address of si %hd\n", &ui);
  printf("address stored in ptr_ui %hd\n", ptr_ui);
  printf("value stored in ptr_ui %hd\n\n", *ptr_ui);
  
  int* ptr_i;
  int i= (unsigned int)~0 >> 1;
  ptr_i = &i;
  printf("max int %d\n", i);
  printf("address of si %hd\n", &i);
  printf("address stored in ptr_i %hd\n", ptr_i);
  printf("value stored in ptr_i %hd\n\n", *ptr_i);
  
  long int* ptr_li;
  long int li = (unsigned long int)~0 >> 1;
  ptr_li = &li;
  printf("max long int %ld\n", li);
  printf("address of li %hd\n", &li);
  printf("address stored in ptr_li %hd\n", ptr_li);
  printf("value stored in ptr_li %hd\n\n", *ptr_li);
  
  // unsigned long int ptr_uli;
  // unsigned long int uli = (unsigned long int)~0;
  // ptr_uli = &uli;
  // printf("max unsigned long int %lu\n", uli);
  // printf("address of si %hd\n", &uli);
  // printf("address stored in ptr_uli %hd\n", ptr_uli);
  // printf("value stored in ptr_uli %hd\n\n", *ptr_uli);
  
  float* ptr_f;
  float f = 1.2345678;
  ptr_f = &f;
  printf("example of f %f\n", f);
  printf("address of f %hd\n", &f);
  printf("address stored in ptr_f %hd\n", ptr_f);
  printf("value stored in ptr_f %hd\n\n", *ptr_f);
  
  char* ptr_char;
  char c = 'c';
  ptr_char = &c;
  printf("example of char %c\n", c);
  printf("address of c %hd\n", &c);
  printf("max short int address stored in ptr_char %hd\n", ptr_char);
  printf("max short int value stored in ptr_char %hd\n\n", *ptr_char);
  
  return 0;
}
