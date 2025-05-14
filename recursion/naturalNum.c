#include <stdio.h>
void naturalNum(int n , int limit );
int main(){
  int n;
  int limit;
  scanf("%d", &n);
  scanf("%d", &limit);
  naturalNum(n, limit);
  return 0;
}
void naturalNum(int n , int limit){
  if(n>limit){
    return ;
  }
 printf("%d ",n);
 naturalNum(n+1,limit);

}