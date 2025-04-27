#include<stdio.h>

int main (){
  int A, B,C,D;
  scanf("%d %d %d %d", &A, &B,&C,&D);
  long long int first = (long long) A*B;
  long long int second = (long long) C*D;
  long long int dif = first - second;

  printf("Difference = %lld", dif);
  return 0;
}