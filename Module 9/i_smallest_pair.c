#include<stdio.h>
#include <limits.h>

int main (){
  int T;
  scanf("%d", &T);
  for(int i=0; i<T;i++){
    int N;
    scanf("%d", &N);
    long long int A[N];
    for(int j=0; j<N; j++){
      scanf("%lld", &A[j]);
    }

    long long min = LLONG_MAX;

    for(int k=0; k<N; k++){
      for(int l=k+1; l<N; l++){
        long long int B;
        B = A[k] + A[l] +l -k;
        if(B < min){
          min = B;
        }
      }
    }
    printf("%lld", min);
  }
  return 0;
}