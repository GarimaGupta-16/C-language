#include <stdio.h>
int count(int n);
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int result=count(n);
  printf("The count of the given number is: %d", result);
  return 0;
}
int count(int n){
if(n==0){
  return 0;
}
return n%10+ count(n/10);
}