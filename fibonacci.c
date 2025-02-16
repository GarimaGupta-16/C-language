#include <stdio.h>
int main(){
  int num, next,i;
  int first =0;
  int second=1;
  scanf("%d",&num);
  if(num<0){
    printf("Invalid");
  }else{
    for(i=0;i<num;i++){
      printf("%d",first);
      next=first+second;
      first=second;
      second=next;
    }
  }
}