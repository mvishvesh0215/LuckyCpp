// passing 2-D arrays to function 
#include<stdio.h>
void accept_data(int arr[3][3]);
void print_data(int arr[3][3]);
int main()
{
    int arr[3][3];
    accept_data(arr); // 100
    print_data(arr); // 100
    printf("size of array in main = %d\n",sizeof(arr)); // 36
    return 0;
}

void accept_data(int arr[3][3]) // int *arr
{
    printf("Enter the array elements :");

    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }   
}

void print_data(int arr[3][3])
{

    printf("The array elements are :\n");

    for(int i =0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n size of array in function = %d\n",sizeof(arr)); // 4
}