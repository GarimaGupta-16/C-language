#include <stdio.h>
int sum(int n ,int limit);
int main(){
int n;
int limit;
scanf("%d %d", &n , &limit);
int result =sum(n,limit);
printf("Sum is %d", result);
return 0;
}

int sum(int n , int limit ){

  if (n>limit){
    return 0;
  }
  

  return n+(sum(n+1,limit));
}