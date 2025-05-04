#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  int n;
  scanf("%d", &n);
  char s[12];
  snprintf(s, sizeof s, "%d", n);
  bool seen_nonzero = false;
  for (int i = strlen(s) - 1; i >= 0; i--)
  {
    if (!seen_nonzero)
    {
      if (s[i] == '0')
      {
        continue;
      }
      seen_nonzero = true;
    }
    printf("%c", s[i]);
  }
printf("\n");
  for(int i=0, j=strlen(s)-1; i<j; i++,j--){
    if(s[i] != s[j]){
      printf("NO");
      return 0;
    } 
  }
  printf("YES");

  return 0;
}