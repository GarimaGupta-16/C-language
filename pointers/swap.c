// Online C compiler to run C program online
#include <stdio.h>
void swapNum(int *a , int *b);
int main() {
    // Write C code here
 
    // Write C code here
    int num1, num2;
    
    scanf("%d %d", &num1 , &num2);
    printf("BEFORE SWAP: a= %d and b=%d\n",num1 , num2);
    swapNum(&num1 , &num2);
   

    return 0;
}

void swapNum(int *a , int *b){
    int temp= *a;
     *a= *b;
     *b= temp;
    printf("AFTER SWAP: a= %d b= %d", *a , *b);
  
}
