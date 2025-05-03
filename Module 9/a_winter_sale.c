#include<stdio.h>

int main (){
  float x, p;
  scanf("%f %f", &x, &p);

  float dis = 100 -x;

  float disdes = dis/100;
  float res = p/disdes;

  printf("%.2f", res);


  return 0;
}