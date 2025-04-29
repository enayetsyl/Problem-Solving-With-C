#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);

  for(int i=N; i>0; i-- ){
    for(int j=i; j>0; j--){
      printf("%d ",j);
    }
    printf("\n");
  }


  return 0;
}