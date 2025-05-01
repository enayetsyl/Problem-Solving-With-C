#include<stdio.h>

int main (){
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n];
  int b[m+1];
  for (int i = 0; i <= m; i++) {
    b[i] = 0;            
}
  for(int i=0; i<n; i++){
    int v;
    scanf("%d", &v);
    if(v<=m){
      b[v]++;
    }
    
  }
  for(int i=1; i<=m; i++){
    printf("%d\n", b[i]);
  }
  return 0;
}