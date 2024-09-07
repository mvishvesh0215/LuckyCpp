// switch case

#include<stdio.h>

int main()
{
    int num1, num2,choice;

    printf("enter the 2 numbers :");
    scanf("%d%d",&num1,&num2);
    printf("1.Addition\n2.Subtration\n3.Multiplication\n4.Division:\n");
    printf("Enter your choice :");
    scanf("%d",&choice); // 3

    switch(choice) // 4
    {

        default :
                printf("Invalid Choice !\n");
                break;

        case 2+2: // Division
                printf("Division = %d\n",num1 / num2);
                break;

        case 1: // addition
                printf("Addition = %d\n",num1 + num2);
                break; // jump statement


        case 3: // Multiplication
                printf("Multiplication = %d\n",num1 * num2);
                break;

        case 2: // Subtraction
                printf("Subtraction = %d\n",num1 - num2);
                break;
        
        
    }

    return 0;
}

/*
case '+'

case '-'


*/