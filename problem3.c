#include<stdio.h>

int main ()
{






        int i , sum = 0 , n ;

        printf("Enter any desimal Number : ");

        scanf("%d", &n);

        printf("The first %d natural number is :\n", n);

        for(i = 1; i <= n; i++)
        {
            sum = sum + i ;
        printf("%d ",i);
        } 
        printf("\nThe Sum is : %d\n", sum);
    return 0;
}