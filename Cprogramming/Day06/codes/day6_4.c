// arrays with pointer notation

#include<stdio.h>

int main()
{
    int arr[5] = {11,22,33,44,55};

    printf("arr[2] = %d\n",arr[2]); // 33
    printf("pointer notation = %d\n",*(arr+2));  // 33

    printf("\n Array Notation :\n");
    for(int i =0;i<5;i++)
    {
        printf("%4d",arr[i]); // array notation  
    }

printf("\n Pointer Notation :\n");
    for(int i =0;i<5;i++)
    {
        printf("%4d",*(arr+i));
    }

    /*
    
    *(arr+2)
    *(100 + 2* scalefactor)
    *(100 + 2 * 4)
    *(100 + 8)
    *(108)
    33

    */
    return 0;
}