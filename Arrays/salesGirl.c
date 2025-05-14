#include <stdio.h>
int main(){
  int arr[3][3];
  for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
      
    scanf("%d",&arr[i][j]);
 
  }
  }
 //sum
  for(int i=0;i<=2;i++){
    int sum =0;
    for(int j=0;j<=2;j++){
      sum = sum + arr[i][j];
    }
  printf("Sales of girl %d are: %d\n", (i+1),sum);
  }
//items 
for(int j=0;j<=2;j++){
  int sum =0;
  for(int i=0;i<=2;i++){
    sum = sum + arr[i][j];
  }
printf("items %d sold are: %d\n", (j+1),sum);
}

//total
int totalSum =0;
for(int j=0;j<=2;j++){
  
  for(int i=0;i<=2;i++){
    totalSum = totalSum + arr[i][j];
  }

}
printf("%d", totalSum);
 
}