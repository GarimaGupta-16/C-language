#include <stdio.h>

int main(){
int total=0;
int count =0;
int flashflood=0;
  int arr[7];
  for(int i=0;i<7;i++){
    scanf("%d",&arr[i]);
    total += arr[i];
    if(arr[i]>100){
       flashflood=1;
    }
    if(arr[i]==0){
       count++;
    }
  }
  int avg= (total)/7;
  printf("Total Rainfall: %d mm\n", total);
    printf("Average Daily Rainfall: %d mm\n", avg);
  if(total>500){
    printf("Heavy Rainfall Alert\n");
  }
  if(flashflood){
    printf("Flash Flood Warning\n");

  }
  if(count==7){
    printf("Drought Alert\n");
  } else if (count > 0) {
      printf("Dry Spell Detected\n");
  }

  return 0;


  
  
}