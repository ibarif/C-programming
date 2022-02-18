#include<stdio.h>

int main (){

    int A;

    printf("Enter any Number : ");
    scanf("%d", &A);

    for (int counter= 1; counter <= 50; counter++ )
    {
        printf("Number is : %d\n", counter);

            if (counter == A)
            {
                break;
            }
            
    }

return 0;

}