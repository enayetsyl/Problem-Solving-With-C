#include<stdio.h>

int main (){
  int t; 
  scanf("%d", &t);
  for(int i =0; i<t; i++){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];

    for(int j=0; j<n; j++){
      int temp;
      scanf("%d", &temp);

      a[j] = temp;
      b[j] = temp;
    }

    for(int k=0; k<n; k++){
      for (int l=0; l<n-1; l++){
        if(b[l] > b[l+1]){
          int temp = b[l];
          b[l] = b[l+1];
          b[l+1] = temp;
        }
      }
    }
    int c[n];
    for(int k=0; k<n; k++){
      int diff = a[k] - b[k];
      if(diff<0){
        diff = -diff;
      }
      c[k] = diff;
    }
    // for(int j=0; j<n; j++){
    //  printf("%d ", a[j]);
    // }
    // printf("\n");
    for(int j=0; j<n; j++){
      printf("%d ", c[j]);
      // if(j != n-1) printf(" ");
    }
    printf("\n");




    
  }
  return 0;
}