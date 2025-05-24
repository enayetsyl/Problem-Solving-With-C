#include<stdio.h>
#include<limits.h>

int max (int a[], int count, int n, int maxi){
  if(count == n) return maxi;
  if(a[count] > maxi) maxi = a[count];
  return max(a, count+1, n, maxi);
}

int main (){
  int n;
  scanf("%d", &n);

  int a[n];

  int maxi = INT_MIN;

  for(int i =0; i<n; i++ ) scanf("%d", &a[i]);

  int result = max(a, 0, n, maxi);

  printf("%d", result);

  return 0;
}