#include <stdio.h>
int main(){
  int arr[] ={10,23,32,48};
  int *ptr = arr;
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
    printf("%d  %d\n",i,*ptr);
    ptr++;
  }
}