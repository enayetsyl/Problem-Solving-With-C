#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);
  int pos=0;
  int neg=0;
  for(int i=0; i<N; i++){
    int v;
    scanf("%d", &v);
    if(v>0) pos += v; 
    else if (v<0)  neg +=v;
    
  }
  printf("%d ",pos);
  printf("%d ",neg);


  return 0;
}