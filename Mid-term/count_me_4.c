#include <stdio.h>
#include <string.h>
int main()
{
  char s[10001];
  scanf("%s", s);
  int a[26] = {0};
  int l = strlen(s);

  for (int i = 0; i < l; i++)
  {
    a[s[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++)
  {
    if (a[i] > 0)
    {
      printf("%c - %d\n", i + 'a', a[i]);
    }
  }

  return 0;
}