#include <stdio.h>
#define PI 3.14
int main(){
  float radius;
  printf("Enter radius of circle:");
  scanf("%f",&radius);
  float area =PI*radius*radius;
  printf("Area of circle: %.2f",area);
  return 0;
}