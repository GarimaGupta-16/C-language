#include <stdio.h>
int main(){
  int arr[] ={5,10,15,20,25};
  int *ptr = arr;
  int size = sizeof(arr)/sizeof(arr[0]);
  int sum=0;
  for(int i=0; i<size; i++){
    sum += *ptr;
    ptr++;
  }
  printf("%d", sum);
}