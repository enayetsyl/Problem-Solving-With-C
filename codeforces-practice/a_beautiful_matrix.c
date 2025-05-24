#include<stdio.h>

int main (){
  int a[5][5];
  int r;
  int c;
  for(int i=0; i<5;i++){
    for(int j=0; j<5;j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(int i=0; i<5;i++){
    for(int j=0; j<5;j++){
      if(a[i][j] ==1){
        r = i;
        c = j;  
      }
    }
  }
  int rc = 2 - r;
  int cc = 2 - c;
  if(rc<0) rc = -rc;
  if(cc<0) cc = -cc;
  printf("%d", rc + cc);

  return 0;
}