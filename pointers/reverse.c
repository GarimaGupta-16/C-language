#include <stdio.h>
void reverse(int *ptr, int n , int *result);
int main(){
  int n;
  printf("Enter the total number of elements in array: ");
  scanf("%d", &n);
  int result;
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);

  }
  int *ptr= arr;
  reverse(ptr,n,&result);
  
}
void reverse(int *ptr, int n, int *result){
  for(int i=n-1; i>=0; i--){
    *result= ptr[i];
    printf("%d ",  *result);

  }
}