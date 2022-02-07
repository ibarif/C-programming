#include<stdio.h>

int main(){
    int  limit = 0 , counter = 0; 

    printf("Enter the number of pattern : ");

    scanf("%d", &limit);

    for ( int index = 1 ; counter <= limit; index++ )
    {
        for (int i = 1; i < index; i++)
        {
            printf("*");
        }
        printf("\n");       
        counter++ ;
    }

return 0;
}