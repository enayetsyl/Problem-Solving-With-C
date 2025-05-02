#include<stdio.h>

int main (){
  int t;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int manhr = m1*d;
    int newm = m1+m2;
    int newt = manhr/newm;
    int save = newt - m1;
    printf("%d", save);
    
  }
  return 0;
}