#include <stdio.h>
int main(){
  
  int arr[10];
  for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }
  int search;
  scanf("%d",&search);
  int count =0;
  
  for(int i=0;i<10;i++){
    if(arr[i]==search){
      count++;
    }
    
  }
  if(count==0){
    printf("Gemstone not found.");
  }else{
  printf("Gemstone num %d found %d times",search,count);
}
}