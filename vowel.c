#include <stdio.h>


int main() {
 char n;
    scanf("%c",&n);
    if(n>='A'  && n<='Z' || n>='a' && n<='z'){
        if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
            printf("Vowel");
        }else{
        printf("Consonant");
        }
    }
   else if (n>='1' && n<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}