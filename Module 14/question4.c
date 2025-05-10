#include<stdio.h>

char small_to_capital(char c){
  char res = c - 32;
  return res;
}

int main (){
  char c;
  scanf("%c", &c);
  char res = small_to_capital(c);
  printf("%c", res);
  return 0;
}