#include <stdio.h>
int main(){
  int n ;
  printf("Enter the number u want the factorial of: ");
  scanf("%d", &n);
  int mul=1;
  for(int i=1;i<=n;i++){
    mul=mul*i;
  }
    printf("factorial of ur number is: %d",mul);
    return 0;
}