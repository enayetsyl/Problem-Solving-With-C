#include<stdio.h>

int main (){
  int  a, b,c;
  scanf("%d %d %d", &a, &b, &c);

  int min = a;
  int max = a;
  int mid;
  if(b<min) min = b;
  if(c<min) min = c;

  if(b>max) max = b;
  if(c>max) max = c;

  mid = a+b+c -min- max;

  printf("%d\n", min);
  printf("%d\n", mid);
  printf("%d\n", max);
  printf("\n");
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d", c);


  return 0;
}