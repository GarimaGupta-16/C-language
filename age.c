#include <stdio.h>
int main(){
  int age;
  scanf("%d", &age);
  if(age<18){
    printf("Child");
  }
  else if(age>=25 && age<=30){
    printf("You are welcome");
  }
  else {
    printf("Adult");
  }
  }
