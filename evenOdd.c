#include <stdio.h>
int main(){
  int n ;
  printf("Enter the number : ");
  scanf("%d", &n);
  
  if(n<0){
    printf("Your num is invalid");
  }else{
    if(n%2==0){
      printf("Your num is even");

    }else{
      printf("Your num is odd");
    }
  }
}