#include<stdio.h>

/* 
1st : counter ----counter<= A ---- printf
2nd : counter++ ----counter<= A ---- printf
*/

int main (){

    int A;

    printf("Enter any Number : ");
    scanf("%d", &A);

    for (int counter= 1; counter <= A; counter++ )
    {
        printf("Number is : %d\n", counter);
    }

return 0;

}