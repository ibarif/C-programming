#include<stdio.h>

int main (){
    int Ca, th, Lh, Gh, Salry;
            
    do{
        printf("Enter your card number : ");
        scanf("%d", &Ca);

        printf("Enter your Total work hours : ");
        scanf("%d", &th);
        getchar();

        Lh = th*10;
        Gh = 40*10 + ( th-40 ) *20;
            if(th > 40)
            {
            printf("\nCard number %d , Total Hours %d , Total salary %d\n\n", Ca, th, Gh);
            }else{
                printf("\nCard number %d , Total Hours %d , Total salary %d\n\n", Ca, th, Lh);
            }
        printf("if you try again prass enter , else enter any key\n\n");
        
    } while(getchar() == '\n');
    
return 0;

}