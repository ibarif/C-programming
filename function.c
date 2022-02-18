#include<stdio.h>

int addFunction(int X, int Y){
    int result;
    result = X + Y;
    return result;
}


    int main (){

        int A , B;

        printf("Please Enter Two Number (Ex: 50 space 10) : ");
        scanf("%d %d", &A, &B);

        int resultNumber = addFunction(A ,B);

        printf("%d + %d = %d \n", A, B, resultNumber);


    return 0;

    }