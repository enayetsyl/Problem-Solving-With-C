#include<stdio.h>

int main (){
  double N;
  scanf("%lf", &N);

  int inte = (int) N;
  double deci = N - inte;


  if(deci != 0.000000){
    printf("float %d %.3f", inte, deci);
  } else {
    printf("int %d", inte);
  }
  return 0;
}