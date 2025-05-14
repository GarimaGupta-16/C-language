
#include <stdio.h>
void numTria(int );
int main(){
  int m;
  printf("Enter the number of rows: ");
  scanf("%d",&m);
  numTria(m);
  
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


  //RIGHT ANGLED NUMBER TRIANGLE
  void numTria(int m ){

    for(int i=1;i<=m;i++){
      int count =1;
      for(int j=1;j<=i;j++){
       printf("%d ",count);
       count++;
      }
      printf("\n");
    }
  }
