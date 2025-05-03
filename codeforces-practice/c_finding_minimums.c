#include<stdio.h>

int main (){
  int n,k;
  scanf("%d %d", &n, &k);
  int d = n/k;
  int rem = n%k;
  for(int i=0; i<d; i++){
    int v;
    int min = 1000000001;
   for (int j=0; j<k; j++){
    scanf("%d", &v);
    if(v<min) min =v;
   }
    printf("%d ", min);
  }

  if(rem>0){
    int v;
    int min = 1000000001;
    for (int j=0; j<rem; j++){
      scanf("%d", &v);
      if(v<min) min =v;
     }
      printf("%d ", min);
  }


  return 0;
}