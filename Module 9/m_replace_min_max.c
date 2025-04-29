#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);
  int A[N];
  int max = -1000001;
  int maxI = 0;
  int min = 1000001;  
  int minI = 0;
  for(int i=0; i<N; i++){
    int t;
    scanf("%d", &t);
    A[i] = t;
    if(t>max){
      max = t;
      maxI = i;
    }
    if(t<min){
      min = t;
      minI = i;
    }
  }
  int temp;
  temp = A[maxI];
  A[maxI] = min;
  A[minI] = max;

  for(int i=0; i<N; i++){
    printf("%d ", A[i]);
  }

  return 0;
}