#include<stdio.h>

int main (){
  int A,B,C;
  scanf("%d %d %d", &A,&B,&C);

  int max = A;
  int min = C;

  if(B>max) max = B;
  if(C>max) max = C;

  if(B<min) min =B;
  if(A<min) min =A;
  if(max == A && min == C){
    printf("%d\n",C);
    printf("%d\n",B);
    printf("%d\n",A);
  }
  else if(max == B && min == C){
    printf("%d\n",C);
    printf("%d\n",A);
    printf("%d\n",B);
  }
  else if(max == C && min == B){
    printf("%d\n",B);
    printf("%d\n",A);
    printf("%d\n",C);
  }
  else if(max == C && min == A){
    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);
  }
  else if(max == A && min == B){
    printf("%d\n",B);
    printf("%d\n",C);
    printf("%d\n",A);
  }
  else if(max == B && min == A){
    printf("%d\n",A);
    printf("%d\n",C);
    printf("%d\n",B);
  }
  
  printf("\n");
  printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);

  return 0;
}