#include <stdio.h>

int main()
{
  long long int id;
  scanf("%lld", &id);
  long long row = id/4;
  long long rem = id%4;
  long long col = (row %2 ==0) ? rem : (3-rem);
  printf("%lld %lld", row, col);
  return 0;
}