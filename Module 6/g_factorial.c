#include<stdio.h>

int main (){
  int T;
  scanf("%d", &T);
  
  for(int i =0; i<T; i++){
    int mul =1;
    int X;
    scanf("%d", &X);
    for(int i=1; i<=X; i++){
      mul = mul *i;
    }
    printf("%d\n", mul);
  }
  return 0;
}