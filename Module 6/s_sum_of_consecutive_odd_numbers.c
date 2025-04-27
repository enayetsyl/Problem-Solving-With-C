#include<stdio.h>

int main (){
  int T;
  scanf("%d", &T);
  
  for(int i =0; i<T; i++){

    int X, Y;
    scanf("%d %d", &X, &Y);
    int sum = 0;
    if(X<Y){
      for(int i =X+1; i<Y; i++ ){
        if(i%2 !=0){
          sum = sum+i;
        }
      }
    }
    else{
      for(int i =Y+1; i<X; i++ ){
        if(i%2 !=0){
          sum = sum+i;
        }
      }
    }
  
    printf("%d\n", sum);
  
  }
  return 0;
}