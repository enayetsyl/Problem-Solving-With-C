#include<stdio.h>
#include<string.h>

int main (){
  int t;
  scanf("%d", &t);

  for(int i=0; i<t; i++){
    char s[10001];
    int sm = 0;
    int cp = 0;
    int di = 0;
    scanf("%s", s);
    int l = strlen(s);

    for(int i=0; i<l; i++){
      if(s[i] >= 'a' && s[i] <= 'z'){
        sm++;
      }
      if(s[i] >= 'A' && s[i] <= 'Z'){
        cp++;
      }
      if(s[i] >= '0' && s[i] <= '9'){
        di++;
      }
    }

    printf("%d %d %d\n", cp, sm, di);

  }

  return 0;
}