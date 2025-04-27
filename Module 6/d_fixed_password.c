#include<stdio.h>

int main (){
  int X;
  while(scanf("%d", &X) !=EOF){

    if(X==1999){
      printf("Correct\n");
      return 0;
    }
    printf("Wrong\n");
  }
  return 0;
}