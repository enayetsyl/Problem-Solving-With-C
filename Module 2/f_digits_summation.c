#include<stdio.h>

int main(){

  long long int N, M;
  scanf("%lld %lld", &N, &M);
  long long int first = N%10;
  long long int second = M%10;
  printf("%lld", first+second);


  return 0;

}