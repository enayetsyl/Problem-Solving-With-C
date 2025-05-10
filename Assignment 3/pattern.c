#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int odd = 1;
  if(n%2==0) odd = 0; 
  for (int i = 1; i <= n - 1; i++)
  {
    for (int k = n - i + 1; k > 1; k--)
    {
      printf(" ");
    }
    for (int j = 1; j <= i * 2 - 1; j++)
    {
      if (i % 2 != 0)
      {
        printf("#");
      }
      else
      {
        printf("-");
      }
    }

    printf("\n");
  }
  for (int l = 0; l < n * 2 - 1; l++)
  {
    if (n % 2 != 0)
    {
      printf("#");
    }
    else
    {
      printf("-");
    }
  }
  printf("\n");
  
  for (int i = 1; i <= n - 1; i++)
  {
    
    for(int l=1; l<=i*2-l; l++){
      printf(" ");
    }
    
    for (int j = i; j <= n * 2 - i-2; j++)
    {
     if(odd == 0){
      if (i % 2 != 0)
      {
        printf("#");
      }
      else
      {
        printf("-");
      }
     } else {
      if (i % 2 != 0)
      {
        printf("-");
      }
      else
      {
        printf("#");
      }
     }
    }
    
    
    printf("\n");
  }
  return 0;
}