#include <stdio.h>
int main(){
  int n=5;

  for(int i=0;i<=n;i++){
    printf("%d  ",i);
    
      for(int j=1;j<=5;j++){
        if(i==0){
          for(int j=1;j<=5;j++){
          printf("%d  ",j);
          
        }
        break;
     
      }
         int mul = i*j;
         printf("%d  ",mul);
      }
      printf("\n");
    }
  }
 
