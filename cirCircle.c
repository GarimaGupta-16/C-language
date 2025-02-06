#include <stdio.h>
#define PI 3.14159
int main(){
  int radius;
  printf("Enter the radius of circle: ");
  scanf("%d",&radius);
  float circum= 2*PI*radius;
  printf("Circumference of circle: %f",circum);
  return 0;

}