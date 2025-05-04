#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  char c[2];

  int ten = (n / 10) % 10;
  int one = n % 10;

   
     if (one != 0 && ten % one == 0) {
   
      printf("YES\n");
  }
  else if (ten != 0 && one % ten == 0) {
     
      printf("YES\n");
  }
  else {
      printf("NO\n");
  }

  return 0;
}