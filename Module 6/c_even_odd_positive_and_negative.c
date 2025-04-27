#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);

  int even = 0;
  int odd =0;
  int positive =0;
  int negative =0;
  for(int i=0; i<N; i++){
    int var;
    scanf("%d", &var);
    // printf("%d", i)
    if(var%2==0){
      even = even+1;
    } else{
      odd = odd+1;
    }
    if(var>0){
      positive = positive+1;
    }
    if(var<0){
      negative = negative+1;
    }
  }

  printf("Even: %d\n", even);
  printf("Odd: %d\n", odd);
  printf("Positive: %d\n", positive);
  printf("Negative: %d\n", negative);

  return 0;
}