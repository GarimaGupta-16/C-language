#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  int newNum=0;
  int lastDigit;
  int num=a;
  while(a>0){
    lastDigit = a%10;
    newNum = newNum*10 + lastDigit;
    a=a/10;
    
  }
  if(num == newNum){
    printf("Palindrome");
  }else{
    printf("Not Palindrome");
  }
}