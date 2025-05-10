#include<stdio.h>

int main (){
  int n;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    for(int j=n; j>i; j--){
      printf(" ");
    }
    for(int k=i; k>=i; k--){
      int l=k;
      while(l>=1){
        printf("%d", l);
        l--;
      }
    }
    printf("\n");
  }
  return 0;
}