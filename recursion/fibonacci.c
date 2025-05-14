#include <stdio.h>
int fibonacci(int n );
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("The fibonacci series is: ");
  for(int i=0; i<n;i++){
    printf("%d ",fibonacci(i));
  }
  return 0;
}

int fibonacci(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  return fibonacci(n-1)+fibonacci(n-2);
  }