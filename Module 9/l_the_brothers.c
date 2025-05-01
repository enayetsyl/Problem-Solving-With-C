#include<stdio.h>
#include<string.h>

int main (){
  char f1[100];
  char s1[100];
  char f2[100];
  char s2[100];
  scanf("%s %s %s %s", &f1, &s1, &f2, &s2);
  int s1l = strlen(s1);
  int s2l = strlen(s2);

  if(s1l == s2l){
    int val = strcmp(s1, s2);
    if(val == 0){
      printf("ARE Brothers");
    } else {
      printf("NOT");
    }
  } else {
    printf("NOT");
  }

  return 0;
}