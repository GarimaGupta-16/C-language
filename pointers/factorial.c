#include <stdio.h>
void fact(int n, long *result);
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  long result;
  if(n<0){
    printf("Number is negative");
  }else{
  fact(n,&result);
  printf("The factorial of the given number is :%ld ", result);
}
return 0;
}

void fact(int n, long *result){
  *result =1;
  for(int i=1; i<=n;i++){
    *result *= i;
  
  }
 
}