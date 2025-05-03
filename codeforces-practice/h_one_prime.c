#include<stdio.h>

int main (){
  int x;
  scanf("%d", &x);
  if(x ==1){
    printf("NO");
    return 0;
  }
  int flag = 0;
  for(int i=2; i<x; i++){
    if(x%i==0){
      printf("NO");
      return 0;
    }
  }

  printf("YES");

  return 0;
}