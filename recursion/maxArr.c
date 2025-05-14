#include <stdio.h>
int maxArr(int arr[],int i, int n);
int main(){
  int n ;
  printf("Enter the total number of elements in array: ");
  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<n;i++){
    scanf("%d", &arr[i]);
  }
  int result = maxArr(arr,0,n);
  printf("Max element of array is : %d",result);
  return 0;
}

int maxArr(int arr[],int i,int n){

if(i==n-1){
  return arr[i];

}
int max= maxArr(arr,i+1,n);

return (arr[i]>max? arr[i]:max);

}