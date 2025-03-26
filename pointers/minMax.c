#include <stdio.h>
int main(){
  int arr[] ={34, 23, 78, 20,0,89};
  int *ptr = arr;
  int size= sizeof(arr)/sizeof(arr[0]);
  int max= *ptr;
  int min= *ptr;

  for(int i=0; i<size ;i++){
    ptr++;
    if(*ptr<min){
      min=*ptr;

    }
     if(*ptr>max){
      max=*ptr;
     }
   

  }
  printf("maximum: %d \n",max);
  printf("minimum: %d",min);
}