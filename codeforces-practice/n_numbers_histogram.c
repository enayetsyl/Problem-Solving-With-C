#include<stdio.h>

int main (){
  char s;
  int n;
  scanf("%c", &s);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    for (int j = 0; j < x; j++) {
        printf("%c", s);
    }
    printf("\n");
}


  return 0;
}