// Scanf with array and pointer notation

#include<stdio.h>

int main()
{
    int arr[5];

    printf("Enter the array elements :\n");

    for(int i=0; i<5; i++)
    {
       // scanf("%d",&arr[i]); // array notation
        scanf("%d",arr+i); // pointer notation
        //         100 + 0*4 = 100
        //         100 + 1*4 = 104
        //         100 + 2*4 = 108
        
    }

    printf("\n Array elements are:\n");

    for(int i=0; i<5; i++)
    {
        //printf("%4d",arr[i]);
        printf("%4d",*(arr+i));
    }
    return 0;
}