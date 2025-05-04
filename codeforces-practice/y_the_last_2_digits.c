#include<stdio.h>

int main (){
  long long a,b,c,d;
  scanf("%lld %lld %lld %lld", &a, &b, &c,&d);
  
  long long res  = 1;
  res = (res * (a%100))%100;
  res = (res * (b%100))%100;
  res = (res * (c%100))%100;
  res = (res * (d%100))%100;
  printf("%02lld", res);
  return 0;
}