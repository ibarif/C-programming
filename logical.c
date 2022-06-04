#include<stdio.h>
/* 
Logical Operator 
&& -- AND
|| -- OR
! -- NOT
 */

int main() {
    printf("1 . %d \n", 3<4 && 3<5);
    printf("2 . %d \n", 3<4 && 5<4);

    printf("3 . %d \n", 3<4 && 5<4);
    printf("4 . %d \n", 3>4 && 5>4);
    printf("5 . %d \n", 3<4 && 3<5);

    printf("6 . %d \n", !(3<4 && 3<5));
    printf("7 . %d \n", !(4<3 || 5<3));

return 0;

}