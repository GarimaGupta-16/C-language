#include <stdio.h>
void displayArr(int arr[], int idx, int n);
int main(){
  int n; 
  printf("Enter the total number of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of array: ");
  for(int i=0; i<n;i++){
    scanf("%d",&arr[i]);
  }
  displayArr(arr,0,n);
  return 0;
}
void displayArr(int arr[],int idx, int n){
  if (n==idx){
    return ;
  }
  printf("%d ", arr[idx]);
  return displayArr(arr,idx+1,n);
}