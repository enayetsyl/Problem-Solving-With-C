#include<stdio.h>
#include<string.h>

int main (){
  int t;
  scanf("%d", &t);

  for (int i=0; i<t; i++){
    char s[101];
    scanf("%s", s);
    int sl = strlen(s);
    if(sl>10){
      printf("%c%d%c\n", s[0], sl-2, s[sl-1]);
    } else{
      printf("%s\n", s);
    }
    
  }
  return 0;
}