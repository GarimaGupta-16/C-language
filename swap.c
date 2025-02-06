#include <stdio.h>
int main(){
   int temp;
   int a=50;
   int b=100;
   temp=a;
   a=b;
   b=temp;
   printf("a=%d\n",a );
   printf("b=%d\n",b);
}