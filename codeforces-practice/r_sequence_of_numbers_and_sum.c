#include<stdio.h>

int main (){
  int n,m;
  while (scanf("%d %d", &n, &m) == 2)
  {
    if( n <= 0 || m<=0){
      return 0;
    }
    int sum =0;
    if(n>m){
      for(int i=m; i<=n; i++){
        printf("%d ", i);
        sum = sum +i;
      }
      printf("sum =%d", sum);
    }
    if(n<=m){
      for(int i=n; i<=m; i++){
        printf("%d ", i);
        sum = sum +i;
      }
      printf("sum =%d", sum);
    }
    printf("\n");
  }
  
  return 0;
}