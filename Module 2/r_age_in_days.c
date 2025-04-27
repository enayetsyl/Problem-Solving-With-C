#include<stdio.h>

int main (){

  int N;
  scanf("%d", &N);

  int year =0;
  int month =0;
  int day =0;

  if(N>=365){
    while(N>=365){
      year = year+1;
      N = N-365;
    }
  }
  if(N>=30){
    while(N>=30){
      month = month+1;
      N = N -30;
    }
  }
  if(N>=1){
    while(N>=1){
      day = day+1;
      N = N-1;
    }
  }

  
    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days\n", day);
  

  return 0;
}