
#include <stdio.h>
void rightAngledTria(int );
int main(){
  int m;
  printf("Enter the number of rows: ");
  scanf("%d",&m);
  rightAngledTria(m);
  
}
   // RIGHT ANGLED TRIANGLE
 void rightAngledTria(int m ){
  for(int i=1;i<=m;i++){
    for(int j=1;j<=i;j++){
      printf("* ");
    }
     printf("\n");
  }
 
 }


    //INVERTED TRIANGLE
  void invertedTria(int m){
    for(int i=m;i>=1;i--){
      for(int j=1;j<=i;j++){
        printf("* ");
      }
      printf("\n");
    }
  }


