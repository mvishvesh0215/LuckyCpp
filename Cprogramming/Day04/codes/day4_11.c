// jump statements : go-to

#include<stdio.h>

int main()
{
    int marks;

START:
    printf("enter your marks :");
    scanf("%d",&marks); 

    if(marks >= 100 && marks <= 200)
        goto END; // END is the label
    else
    {
        goto START;
    }

END :
    printf("Congrats !\n");
       

    return 0;
}