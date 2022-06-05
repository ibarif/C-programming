# include <stdio.h>

/* 
Syntax of 3 Loops
for(initialisation; condition; updation)
do while loop(1 . initialisation; 3 .condition; 2 .updation)
*/

int main () {

    //for loop
    printf("For loop \n");
    for(int i=1; i<=5; i++) {
    printf("%d\n", i);
    }

    //while loop
    printf("While loop \n");
    int i=6;
    while(i<=10) {
    printf("%d\n", i);
    i++;
    }

    //do while loop
    printf("Do while loop \n");
    i = 11;
    do {
        printf("%d\n", i);
    i++;
    } while(i<=15);

return 0;

}