#include <stdio.h>
int main()
{
    int limit, sum = 0, counter = 0;

    printf("Input number of terms : ");
    scanf("%d", &limit);
    printf("The odd numbers are : ");
 
    for (int index = 1; counter < limit; index++)
    {
            if (index%2 == 1)
            {
                printf("%d ",index);
                counter++;
                sum = sum + index; 
            }
                    
      }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d\n",limit, sum);

    return 0;
}