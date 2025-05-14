#include <stdio.h>
void displayArr(int n,int arr[]);
int main(){
  int n ;
  printf("Enter the total number of elements in array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements: ");
  for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  displayArr(n,arr);
  
return 0;
}
void displayArr(int n , int arr[n]){
  printf("Elements in array are: ");
  for(int i=0; i<n;i++){
    printf("%d ", arr[i]);
  }
}