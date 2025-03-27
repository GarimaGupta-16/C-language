#include <stdio.h>
int checkPrime(int n);
int displayPrime(int n);

int main(){
  int n;
printf("Enter the number:");
scanf("%d", &n);

displayPrime(n);
}
int checkPrime(int n){
  if(n<=1){
    return 0;
  }
  for(int i=2; i*i<=n;i++){
    if(n%i==0){
      return 0;
    }
   
  }
  return 1;
  

}
int displayPrime(int n){
  for(int i=2;i<=n;i++){
    if(checkPrime(i)){
      printf("%d\n",i);
    }
  }
  return 0;
}
