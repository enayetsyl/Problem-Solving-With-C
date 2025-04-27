#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);
  int max = 0;
  for(int i=0; i<N; i++){
    int V;
  scanf("%d", &V);
    
    if(V>max) max = V;
  }

  printf("%d", max);
  return 0;
}