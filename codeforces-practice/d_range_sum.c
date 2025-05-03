#include<stdio.h>

int main (){
  int t;
  scanf("%d", &t);
  while(t--){
    long long int l, r;
    scanf("%lld %lld", &l, &r);
    if(l>r){
      long long tmp = l;
      l=r;
      r=tmp;
    }
    long long int c = r-l+1;
    long long int sum = c *(l+r) /2;
    
    printf("%lld\n", sum);
  }
  return 0;
}