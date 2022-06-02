#include <stdio.h>

// Even and Odd Numbers .

int main () {

    int number , A;

    printf("Enter a number : ");
    scanf("%d", &number);

    A = number % 2 == 0;

    // printf("%d",A);

    if (A == 1)
    {
        printf("Even \n");
    }
    else 
    {
        printf("Odd \n");
    }
    

return 0;

}