#include<stdio.h>

int main (){
  int a, b,c;
  char s,q;
  scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
  int ans = 0;
  if(s == '+'){
    ans = a+b;
  } else if(s == '-'){
    ans = a-b;
  } else if(s == '*'){
    ans = a*b;
  }

  if(c == ans){
    printf("Yes");
  } else {
    printf("%d", ans);
  }

  return 0;
}