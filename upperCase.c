#include<stdio.h>

// Check upper case or Lower case .

int main () {

    char ch;
    printf("Enter a Character : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case \n");
    }
    else 
    {
        printf("Not English Character \n");
    }

return 0;

}