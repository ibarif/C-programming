#include<stdio.h>

/* 
printf all (counter <= 50) number
without input number [scanf("%d", &A);]
*/

int main (){

    int A;

    printf("Enter any Number : ");
    scanf("%d", &A);

    for (int counter= 1; counter <= 50; counter++ )
    {

            if (counter == A)
            {
                continue;
            }
            printf("Number is : %d\n", counter);
    }

return 0;

}