#include<stdio.h>
#include<stdbool.h>

int main()
{
  int num1;
  num1 = 10;
  int num2 = 20;

  printf("We can declare a variable and assign value to it at the same line. Also we can declare variable in one line and assign value to it in different line.\n");

  printf("Format specifier for int type is parcentage sign then small d\n");

  printf("num1 %d\n",num1);
  printf("num2 %d\n",num2);

  num2 = 30;

  printf("After assigning value to a variable we can reassign value to it later.\n");

  printf("num2 after reassign %d\n",num2);

  float num3 = 3.21349508;

  printf("Format specifier for float type is parcentage sign then small f\n");

  printf("num3 ful will print 6 digit after decimal %f\n", num3);
  
  printf("num3 2 digit %.2f\n", num3);

  printf("If we want to specify number of digit we want to see after decimal then we have to put decimal and then the number in between parcentage and f letter.\n");
  printf("num3 3 digit %.3f\n", num3);
  printf("num3 4 digit %.4f\n", num3);
  
  printf("Character should always put inside single quotation.\n");

  char c1 = 'a';  // Character should always put inside single quotation.
  char c2 = '=';
  char c3 = '4';

  printf("Format specifier for char type is parcentage sign then small c\n");

  printf("Character %c\n", c1);
  printf("Character %c\n", c2);
  printf("Character %c\n", c3);

  printf("Inside the char type we can put letters, symble or number\n");

  printf("In order to use boolean data type we have to user stdbool.h header file.\n");
  
  bool b1 = true;
  bool b2;
  b2 = false;
  
  printf("For printing bool data type we have to use same format specifier for the integer. For true value we will get 1 in the terminal and for false 0.\n");

  printf("Bool b1 %d\n", b1);
  printf("Bool b2 %d\n", b2);

  return 0;
}