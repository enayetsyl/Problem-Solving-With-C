#include<stdio.h>

int main (){
  int t;
  scanf("%d", &t);
  for(int i =0; i<t; i++){
    long long int n; 
    scanf("%lld", &n);
    long long int mul=1;
    for(int i =2; i<=n; i++){
      mul *= i;
    }
    printf("%lld\n", mul);
  }

  return 0;
}