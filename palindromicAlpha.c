#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    char ch ='A';
        for(int j=1;j<=n-i;j++){
            printf(" ");
        
        }
        for(int j=1;j<=i;j++){
            printf("%d",ch);
            ch++;

        }
    
        for(int j=i-1;j>=1;j--){
            
            printf("%d",j);
      
        }
        printf("\n");
        

