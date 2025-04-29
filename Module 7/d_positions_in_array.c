#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);

  
    for(int i=0; i<N; i++){
      int v;
      scanf("%d", &v);
      if(v<=10){
        printf("A[%d] = %d\n", i, v);
      }
    }

  return 0;
}