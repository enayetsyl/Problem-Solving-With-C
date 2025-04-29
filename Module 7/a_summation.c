#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);
 long long int A[N];
  long long int sum = 0;

  for(int i=0; i<N; i++){
    scanf("%lld", &A[i]);
  }
 
  for(int i=0; i<N; i++){
    sum += A[i];
  }


if(sum < 0){
  long long int new_sum = sum;
  new_sum -= sum;
  new_sum -= sum;
 
  printf("%lld", new_sum);
}else {
  printf("%lld", sum);
}

  return 0;
}