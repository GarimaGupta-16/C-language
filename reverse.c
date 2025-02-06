#include <stdio.h>
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  int lastDigit;
  int newNum=0;

  for(int i =0;i<n;i++){
    lastDigit= n%10;
    newNum= newNum*10+lastDigit;
    n= n/10;


  }
  printf("Reversed number is : %d",newNum);
}