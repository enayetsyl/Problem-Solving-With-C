#include<stdio.h>
void max_and_min(int a[], int n){
int max = 0;
int min = 100001;
for(int i = 0; i<n; i++){
  if(a[i] > max){
    max = a[i];
  }
  if(a[i] < min){
    min = a[i];
  }
}
printf("%d %d", min, max);
}

int main (){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
  }
  max_and_min(a, n);
  return 0;
}