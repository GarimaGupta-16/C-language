#include <stdio.h>
int main(){
int a[2][2];
int b[2][2];
int c[2][2];
printf("Enter elements of matrix A: ");
for(int i=0;i<=1;i++){
  for(int j=0;j<=1;j++){
    scanf("%d" , &a[i][j]);
  }
}
printf("Enter elements of matrix B: ");
for(int i=0;i<=1;i++){
  for(int j=0;j<=1;j++){
    scanf("%d", &b[i][j]);
  }
}
for(int i=0;i<=1;i++){
  
  for(int j=0;j<=1;j++){
    int sum =0;
    for(int k=0;k<=1;k++){
      sum = sum + a[i][k]*b[k][j];
    }
    c[i][j]=sum;
    
    
  }

  
}
printf("Elements after sum are:\n");
for(int i=0;i<=1;i++){
  for(int j=0;j<=1;j++){
    printf("%d " , c[i][j]);
    if (j==1){
      printf("\n");
    }
  }
}
}
