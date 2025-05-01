#include<stdio.h>

int main (){
  int l1, r1, l2, r2;
  scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

  if(l2>r1 && r2>r1){
    printf("%d %d", l2, r1);
  } else if(r1<=l2){
    printf("%d %d", l2, r1);
  
  }else {
    printf("-1");
  }
  return 0;
}