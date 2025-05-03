#include<stdio.h>
#include<limits.h>
int main (){
  int n;
  scanf("%d", &n);
  int max = INT_MIN;

  for(int i=0; i<n; i++){
    long long d;
    int count = 0;
    scanf("%lld", &d);
   
    while((d & 1) == 0){
      
      if(d%2 != 0) break;
      else {
        d = d/2;
        count++;
      }
    }

    if(count>max) max = count;
  }

  printf("%d", max);
  return 0;
}