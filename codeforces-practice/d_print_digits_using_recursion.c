#include<stdio.h>

void print_digit(int n){
  if(n==0){
    return;
  }
 
  print_digit(n/10);
  printf("%d ", n%10);
}

int main (){
  int t;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    int n; 
    scanf("%d", &n);
    if(n==0){
      printf("0");
    } else {
      print_digit(n);
    }
    printf("\n");
  }
  

  return 0;
}