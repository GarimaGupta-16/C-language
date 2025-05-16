
#include <stdio.h>
void alphaTria(int );
int main(){
  int m;
  printf("Enter the number of rows: ");
  scanf("%d",&m);
alphaTria(m);
  
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



  //Triangle with Same Number per Row
void sameNumTria(int m ){
     int count =1;
    for(int i=1;i<=m;i++){
      
      for(int j=1;j<=i;j++){
       printf("%d ",count);
       
      }
      count++;
      printf("\n");
    }
  }


  //Right-Aligned Triangle
  void rightTria(int m){
    for(int i=1;i<=m;i++){
      for(int j=1;j<=m-i;j++){
        printf(" ");
      }
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");

      
    }
    
    
  }


  //Floyd's Triangle
  void floydTria(int m){
    int count =1;
    for(int i=1;i<=m;i++){
      for(int j=1;j<=i;j++){
        printf("%d ",count);
        count++;
      }
      printf("\n");
    }
  }


  //Alphabet Triangle
  void alphaTria(int m ){
    char Alpha='A';
    for(int i=1;i<=m;i++){
      for(int j=1;j<=i;j++){
        printf("%c",Alpha);
        Alpha++;
      }
      printf("\n");
    }
  }