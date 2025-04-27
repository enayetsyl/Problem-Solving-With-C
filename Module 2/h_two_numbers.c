#include<stdio.h>
#include<math.h>
int main(){
  int A, B;
  scanf("%d %d", &A, &B);
  float c = ceil((float)A/B);

  printf("floor %d / %d = %d\n", A, B, A/B);
  printf("ceil %d / %d = %.0f\n", A, B,c);
  printf("round %d / %d = %.0f\n", A, B, round((float)A/B));


  return 0;
}