#include<stdio.h>
#include<string.h>

int is_palindrome(char c[]){
  int len = strlen(c);
  for(int i=0,j=len-1; i<j; i++, j--){
    if(c[i] != c[j]) return 0;
  }

  return 1;
}


int main (){
  char c[1001];
  scanf("%s", c);
  int p = is_palindrome(c);
  if(p == 1) printf("Palindrome");
  else printf("Not Palindrome");
  return 0;
}