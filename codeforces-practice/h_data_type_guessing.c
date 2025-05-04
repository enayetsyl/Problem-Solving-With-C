#include<stdio.h>

int main (){
  long long n, k, a;
  scanf("%lld %lld %lld", &n, &k, &a);
  double res = (double)n*k/a;
  // printf("%lf", res);
  long long i = (long long) res;
  // printf("%lld", i);

  if(res != i)printf("double");
  else {
    if(res >= -214783648 && res <= 2147483647){
      printf("int");
    }
    
    else printf("long long");
  }
 



  return 0;
}