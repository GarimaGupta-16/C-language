#include <stdio.h>
void pattern(int n);
int main(){
  int n;
  scanf("%d",&n);
  pattern(n);
  return 0;
}
void pattern(int n){
  
  for(int i=0;i<n;i++){
    char count ='A'+i;
    for(int j=n;j>i;j--){
     
   
      printf("%c", count);
      count++;
    }

    printf("\n");

  }
}