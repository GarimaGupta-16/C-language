#include <stdio.h>
int main(){
  int num =14;
  int isPrime=1;
  if (num<=1){
    printf("Invalid");
  }else {

    for(int i=2;i*i<=num;i++){
      if(num%i==0){
        isPrime= 0;
        break;
      }
     
    }
  }
  if(isPrime==1){
    printf("Prime Num");
  }
  else{
    printf("Not prime");
  }
}