#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);
  int A[N];

  for (int i=0; i<N; i++){
    int V;
    scanf("%d",&V);
    if(V > 0){
      V = 1;
      A[i] = V;
    } else if(V < 0){
      V = 2;
      A[i] = V;
    }
    printf("%d ", V);
  }
  return 0;
}