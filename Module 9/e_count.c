#include<stdio.h>
#include<string.h>

int main (){
  char a[1000001];
  scanf("%s", a);

  int length = strlen(a);

  long long int sum =0;

  for(int i=0; i<length; i++){
    
    sum += a[i] - 48;
  }

  printf("%lld", sum);

  return 0;
}