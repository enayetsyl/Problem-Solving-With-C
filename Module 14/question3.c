#include<stdio.h>

int char_to_ascii(char x){

  int res = x - 0;

  return  res;
}

int main (){
  char c;
  scanf("%c", &c);
  int res = char_to_ascii(c);
  printf("%d", res);
  return 0;
}