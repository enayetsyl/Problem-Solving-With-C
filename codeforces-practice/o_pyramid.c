#include<stdio.h>

int main (){
  int n;
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  {
    int j = i;
    while (j != 0)
    {
      printf("*");
      j--;
    }
    printf("\n");
  }

  return 0;
}