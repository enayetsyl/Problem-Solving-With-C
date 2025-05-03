#include<stdio.h>

int main (){
  int a, b;
  scanf("%d %d", &a, &b);

  int ded = a-b;
  if(ded>0){
    printf("%d", ded);
  }else{
    printf("0");

  }

  return 0;
}