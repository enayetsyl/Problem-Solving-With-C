#include<stdio.h>

int main (){
  int N;
  scanf("%d", &N);
  int min = 10000001;
  int position;
  int flag=0;
  for(int i=1; i<=N; i++){
    int v;
    scanf("%d", &v);
    if(v<min){
      min =v;
      position = i;
      flag =1;
    }
  }
  printf("%d %d", min, position);
  return 0;
}