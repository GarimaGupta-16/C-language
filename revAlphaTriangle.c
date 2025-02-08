#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        char count ='A';
        for(int j=1;j<=i;j++){
            printf("%c ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}