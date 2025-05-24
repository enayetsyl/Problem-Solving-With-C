#include <stdio.h>

int count_v(char s[], int lc, int vc){
  if(s[lc] == '\0') return vc;

  if (s[lc] == 'a' || s[lc] == 'e' || s[lc] == 'i' || s[lc] == 'o' || s[lc] == 'u' ||
        s[lc] == 'A' || s[lc] == 'E' || s[lc] == 'I' || s[lc] == 'O' || s[lc] == 'U') vc+=1;

  return count_v(s, lc+1, vc);

}

int main()
{
  char s[201];
  fgets(s, sizeof(s), stdin);

  int letter_count = 0;
  int vowel_count = 0;
  int res = count_v(s, letter_count, vowel_count);

  printf("%d", res);

  return 0;
}