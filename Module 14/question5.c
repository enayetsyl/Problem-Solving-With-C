#include<stdio.h>

char capital_to_small(char c){
  char res = c + 32;
  return res;
}

int main (){
  char c;
  scanf("%c", &c);
  char res = capital_to_small(c);
  printf("%c", res);
  return 0;
}