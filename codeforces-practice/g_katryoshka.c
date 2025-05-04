#include<stdio.h>
#include<limits.h>
int main (){
  long long n,m,k;
  scanf("%lld %lld %lld", &n, &m, &k);
  long long z = n<m ? n : m;
  z = z<k ? z :k;

  n = n-z;
  k = k-z;

  long long y = n/2 < k ? n/2 : k;

  printf("%lld", z+y);
  return 0;
}