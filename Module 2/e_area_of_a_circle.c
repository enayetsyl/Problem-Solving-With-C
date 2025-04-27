#include<stdio.h>

int main (){
  double R;
  scanf("%lf", &R);

  double pai = 3.141592653;

  double r2 = R*R;

  double area = r2*pai;

  printf("%.9f", area);

  return 0;
}