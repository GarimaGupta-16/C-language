#include <stdio.h>
void pos(int arr[],int n);
int main(){
  int n;
  printf("Enter the total numbers: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  pos(arr,n);
  return 0;

}

void pos(int arr[],int n){
  int pos =0;
  int neg=0;
  for(int i=0;i<n;i++){
    if(arr[i]>=0){
      pos++;
    }else {
      neg++;
    }
   
  }
  printf("%d\n",pos);
  printf("%d",neg);
}