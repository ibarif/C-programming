#include <stdio.h>

int main (){
    int n , cube = 0;

    printf("Enter any number : "); 
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++)
    
    {
        cube = i*i*i;
        printf("\nNumber is : %d and cube of the %d is : %d\n", i , i , cube);
        

    }

return 0;
}