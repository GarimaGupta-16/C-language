#include <stdio.h>
int main(){
  char a;
  scanf("%c",&a);
  if (a>='A' && a<='Z'){
    printf("Capital Alphabets");
  }else if(a>='a' && a<='z'){
    printf("Small Alphabets");

  }
  else if (a>='1' && a<='9'){
    printf("Digits");
  }
  else{
    printf("Special Characters");
  }

  }



