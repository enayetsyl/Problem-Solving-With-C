#include<stdio.h>

int main (){
  printf("In order to take input first we have to declare variable. Which could be int, char, float\n");
  int i;
  float f;
  char c;

  printf("We have to use scanf word together with format specifier for taking input. Format specifier are same as print format specifier. We also have to mention the variable name as like the print. The only difference is that we have to put & before the variable name.\n");

  scanf("Give the integer input: %d\n", &i);
  scanf("Give the float input: %d\n", &f);
  scanf("Give the char input: %d\n", &c);
  printf("Your integer input is:%d\n",i);
  printf("Your float input is:%d\n",f);
  printf("Your char input is:%d\n",c);


  return 0;
}