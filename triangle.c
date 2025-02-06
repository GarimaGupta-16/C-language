#include <stdio.h>



int main() {
      int n , a , b;
    scanf("%d %d %d",&n , &a , &b);
    int x= n*n;
    int y= a*a;
    int z= b*b;
        if(x==y+z || y== x+z || z== x+y){
        printf("Valid");
    }
    else{
        printf("Invalid");
    
}
    return 0;
}