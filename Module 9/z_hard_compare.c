#include<stdio.h>
#include<math.h>

int main (){
  long long int a,b,c,d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

  long long int ab = pow(a,b) ;
  long long int cd = pow(c,d) ;
  if(ab>cd){
    printf("YES");
  } else {
    // printf("%lld %lld", ab, cd);
    printf("NO");

  }

  return 0;
}