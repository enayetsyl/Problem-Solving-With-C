#include<stdio.h>


long long int factorial(int n, long long int f){
  if (n ==0) return f;
  f = n* f;
  return factorial(n-1, f);

}

int main (){
  int n;
  scanf("%d", &n);
  long long int f = 1;
  long long int v= factorial(n, f);
  printf("%lld", v);
  return 0;
}