#include <stdio.h>

int main (){

        int A , B , C = 0;

        printf("Enter any number : ");
        scanf ("%d %d", &A , &B);
        // printf(" to ");
        // scanf ("%d", &B);

        for (int j = A ; j <= B ; j++)
        {

            for ( int i = 1; i <= 10 ; i++)
            {
                C = j * i ;
                printf("%dX%d = %d, ", j, i, C );
            }
            printf("\n");

        }


return 0;

}