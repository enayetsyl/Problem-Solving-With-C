#include<stdio.h>

int my_len(char c[]){
  int i = 0;

  while(c[i] != '\0'){
    i++;
  }

  return i;
}

int main (){
  char c[10];
  scanf("%s", c);
  printf("%d", my_len(c));
  return 0;
}