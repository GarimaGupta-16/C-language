#include <stdio.h>
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  int lastDigit;
  int newNum=0;

  while(n>0){
    lastDigit= n%10;
    newNum= newNum*10+lastDigit;
    n= n/10;


  }
  printf("Reversed number is : %d",newNum);
}