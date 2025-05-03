#include<stdio.h>

int main (){
  int n;
  scanf("%d", &n);

  for(int i=0; i<n; i++)
  {
    int j = n;
    while (j != i)
    {
      printf("*");
      j--;
    }
    printf("\n");
  }

  return 0;
}