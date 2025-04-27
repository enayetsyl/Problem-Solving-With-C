#include<stdio.h>

int main (){
  int T;
  scanf("%d",&T);
  for(int i=0;i<T;i++){

    int X;
    scanf("%d",&X);
    while (X>0)
    {
      int digit = X%10;
      printf("%d ", digit);
      X /= 10;
    }
    printf("\n");
  }
  
  return 0;
}