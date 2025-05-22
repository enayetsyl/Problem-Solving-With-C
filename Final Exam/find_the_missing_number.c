#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    long long int m, a, b, c;
    scanf("%lld %lld %lld %lld", &m, &a, &b, &c);


    if (m == 0)
    {
      printf("0\n");
      continue;
    }
    long long int mul = a * b * c;
    // printf("%lld\n", m);
    // printf("%lld\n", a);
    // printf("%lld\n", b);
    // printf("%lld\n", c);

    double val = (double)m / mul;
// printf("%f\n", val);
    long long int v = (long long)val;
    // printf("%lld\n", v);
    if (v == val && v > 0)
    {
      printf("%.0f\n", val);
    }else {
      printf("-1\n");
    }
  }

  return 0;
}