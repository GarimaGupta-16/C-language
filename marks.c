#include <stdio.h>
int main(){
  int phy,chem,bio,maths,eng;
  printf("Enter phy marks:");
  scanf("%d",&phy);
  printf("Enter chem marks:");
  scanf("%d",&chem);
  printf("Enter bio marks:");
  scanf("%d",&bio);
  printf("Enter maths marks:");
  scanf("%d",&maths);
  printf("Enter eng marks:");
  scanf("%d",&eng);
  int sum= phy+chem+bio+maths+eng;
  int percentage= sum/5;
  printf("The aggregate marks are:%d\n",sum);
  printf("The percentage:%d",percentage);
  return 0;

 
}