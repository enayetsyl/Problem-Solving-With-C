#include<stdio.h>

int main (){
  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  int min =A, max =C;
  if(B<min) min = B;
  if(C<min) min = C;

  if(A>max) max =A;
  if(B>max) max = B;

  printf("%d %d", min, max);
  return 0;
}
