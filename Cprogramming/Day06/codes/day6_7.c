// Arrays in function
// arrays are pass by address
#include<stdio.h>

void accept_Data(int arr[5]);
void print_data(int arr[5]);

int main()
{
    int arr[5];
    accept_Data(arr); // 100
    print_data(arr); // 100
    printf("\n size of arr in main() = %d\n",sizeof(arr));
    return 0;
}

void accept_Data(int arr[5]) // pointer
{
    printf("Enter the data elements :\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
        // scanf("%d",arr+i);
    }
}

void print_data(int arr[5])
{
    printf("The array elements are :\n");

    for(int i =0; i<5; i++)
    {
        printf("%4d",arr[i]);
        //printf("%4d",*(arr+i));
    }

    printf("\n size of arr in print_Data() = %d\n",sizeof(arr));
}