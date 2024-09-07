// do-while with switch case

// switch case 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1 = 15,num2 = 10,choice;
do{
    printf("0.Exit\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice :");
    scanf("%d",&choice); // 3

    switch(choice) // 3
    {
        default : 
                printf("Enter valid choice between 1 to 4 \n");
                break;
        case 1+2:
                printf("Multiplication = %d\n",num1 * num2);
                break;
        case 1 :
                printf("Addition = %d\n",num1 + num2);
                break;
        case 4:
                printf("Division = %d\n",num1 / num2);
                break;
        case 2:
                printf("subtraction = %d\n",num1 - num2);
                break;
        case 0 : exit(0);

    }
        
        }while(choice != 0);
    return 0;
}