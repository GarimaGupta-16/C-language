//First Method
/*
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
  */


#include <stdio.h>
void sum(int arr[],int n, int *sum1);
int main(){
  int n;
  int sum1;

  printf("Enter the number of elements in array: ");
  scanf("%d",&n);

  printf("Enter the elemets: ");
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  sum(arr,n , &sum1);
  printf("Sum is %d", sum1);

}

void sum(int arr[], int n, int *sum1){
  *sum1=0;
  for(int i=0; i<n;i++){
    *sum1 += arr[i];
  }

}