#include<stdio.h>

long long summation(int a[], int n, int i, long long sum){
  if(i == n) return sum;

  sum += a[i];
// printf("%d ", sum);
  return summation(a, n, i+1, sum);

}

int main (){
  int n;
  scanf("%d", &n);
  int a[n];
  int sum =0;

  
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("%lld",summation(a, n, 0, 0));

  return 0;
}