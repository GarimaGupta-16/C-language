#include <stdio.h>
#include <string.h>
void rev(char str[],int i, int n );
int main(){
  char str[100];
  scanf("%s",str);
  int length = strlen(str);
 rev(str,0,length-1);
 printf("%s",str);
}
void rev(char str[],int i, int n){
  if(i>=n){
    return;

  }
  char temp = str[i];
  str[i] = str[n];
  str[n] = temp;
   rev(str,i+1,n-1);



}