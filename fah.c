#include <stdio.h>
int main(){
  float f ;
  printf("Enter the value of fahrenheit: ");
  scanf("%f",&f);
  float cel= (f-32)*5/9;
  printf("celcius temp = %f", cel);
}