#include <stdio.h>

int main () {

   int A;

   printf(" Enter any number : ");
   scanf("%d", &A);

   if (A < 50)
   {
      printf(" %d is less than 50 \n", A);
   }else{
      if (A == 50)
      {
         printf(" %d is equal to 50 \n",A);
      }else{
         printf(" %d is greater then 50 \n", A);
      }
      
   }
   
   return(0);
}
