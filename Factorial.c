#include<stdio.h>

int main (){

    int a, Mal =1;

    printf("Enter any number : ");
    scanf("%d", &a);

    for ( int index = 1; index <= a; index++)

    {
        Mal = Mal * index ;
        
    }

    printf("\nfactorial is %d\n", Mal);
    

return 0;
}