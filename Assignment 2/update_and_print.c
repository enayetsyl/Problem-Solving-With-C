#include<stdio.h>

int main (){
  int N,X,V;
  int A[N];
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &A[i]);

  }
  scanf("%d", &X);
  scanf("%d", &V);
  printf("%d %d %d", N, X, V);
  // A[X] = V;
  // for(int i=N-1; i>=0; i--){
  //   printf("%d ", A[i]);
  // }
  return 0;
}