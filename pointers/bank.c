#include <stdio.h>
void balance(float *b1 , float *b2);
int main(){
  float b1, b2;
  scanf("%f %f",&b1 , &b2);
  printf("before swap : b1 = %.2f and b2 = %.2f\n", b1 , b2);
  balance(&b1, &b2);


}

void balance(float *b1 , float *b2){
  if(*b1<0 || *b2<0){
    printf("Invalid Input");
  }else if(*b1 ==0 || *b2==0){
    printf("Zero Balance");
  }else if(*b1 == *b2){
    printf("No swap needed");
  }else{
    float temp = *b1;
    *b1= *b2;
    *b2= temp;
    printf("After swap : b1 = %.2f and b2 = %.2f",*b1 , *b2);
   
  }

}