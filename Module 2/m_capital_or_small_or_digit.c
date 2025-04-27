#include<stdio.h>

int main(){
  char X;
  scanf("%c", &X);

  if(X >= 'A' && X<='Z'){
    printf("ALPHA\n");
    printf("IS CAPITAL\n");
  } else if (X >= 'a' && X<='z')
  {
    printf("ALPHA\n");
    printf("IS SMALL\n");
  } else {
    printf("IS DIGIT\n");
  }

  return 0; 
}