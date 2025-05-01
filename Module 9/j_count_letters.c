#include<stdio.h>
#include<string.h>

int main (){
  char a[1000001];
  scanf("%s", a);
  
  int v = strlen(a);

  int b[26] = {0};

  for(int i =0; i<v; i++){
    b[a[i] - 'a']++;
  }

  for (int  i=0; i<26; i++){
    if(b[i]>0){
      printf("%c : %d\n", i+'a', b[i]);
    }
  }









  return 0;
}