// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//   int n , i, *ptr,sum=0;
//   printf("Enter number of elements: ");
//   scanf("%d",&n);
//   ptr = (int*) malloc(n*sizeof(int));

//   if(ptr==NULL){
//     printf("Error");
//     exit(0);

//   }
//   printf("Enter elements: ");
//   for (i=0;i<n;++i){
//     scanf("%d",ptr+i);
//     sum += *(ptr+i);
    
//   }
//   printf("Sum = %d",sum);
//   free(ptr);
// }






// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//   int n , i, *ptr,sum=0;
//   printf("Enter number of elements: ");
//   scanf("%d",&n);
//   ptr = (int*) calloc(n,sizeof(int));

//   if(ptr==NULL){
//     printf("Error");
//     exit(0);

//   }
//   printf("Enter elements: ");
//   for (i=0;i<n;++i){
//     scanf("%d",ptr+i);
//     sum += *(ptr+i);
    
//   }
//   printf("Sum = %d",sum);
//   free(ptr);
// }





#include <stdio.h>
#include <stdlib.h>
int main(){
  int n1,n2 , i, *ptr;
  printf("Enter size: ");
  scanf("%d",&n1);
  ptr = (int*) malloc(n1*sizeof(int));

  printf("Address:\n ");
  for (i=0;i<n1;++i){
    printf("%p",ptr+i);}
    printf(" new size :\n ");
    scanf("%d",&n2);
    ptr= realloc(ptr,n2*sizeof(int));
    printf("New Address:\n ");
    
   for(int i=0;i<n2;++i){
    printf("%p",ptr+i);}
    free(ptr);
    return 0;
   }

 
