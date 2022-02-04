#include <stdio.h>

int main (){

        int A , B = 0;

        printf("Enter any number : ");
        scanf ("%d", &A);

        for ( int i = 1; i <= 10 ; i++)
        {
            B = A * i ;
            printf("\n%d X %d = %d\n", A, i, B );
        }


return 0;

}