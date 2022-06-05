#include<stdio.h>

/* 
Ternary Operator 
Condition ? doSomething if TRUE : doSomething if FALSE;
*/

int main() {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    age > 18 ? printf("adult \n") : printf("not adult \n");
    
return 0;

}