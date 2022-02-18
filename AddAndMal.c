#include <stdio.h>

    int main(){

        int x, y;

        printf("Enter 1st number: ");
        scanf("%d", &x);
        printf("Enter 2nd number: ");
        scanf("%d", &y);

        printf("\n%d + %d = %d\n", x, y, x + y);
        printf("%d - %d = %d\n", x, y, x - y);
        printf("%d * %d = %d\n", x, y, x * y);
        printf("%d / %d = %d\n\n", x, y, x / y);

    return 0;
}