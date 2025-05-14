#include <stdio.h>
void rotation(int arr[], int n , int k);
int main(){
  int n ;
  scanf("%d",&n);
  int arr[n];
  for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int k;
  scanf("%d",&k);
  rotation(arr,n , k);
}
void rotation(int arr[], int n , int k){
  int temp[n];
  for(int i=0;i<n;i++){
      temp[(i+k)%n]=arr[i];
  }
  for(int i=0;i<n;i++){
    arr[i]=temp[i];
  }
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }
}