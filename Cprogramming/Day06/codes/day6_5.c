// &arr, &arr+1

#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    printf("arr = %u\n",arr); // 100
    printf("&arr = %u\n",&arr); // 100
    printf("arr+1 = %u\n",arr+1); // 104
    printf("&arr+1 = %u\n",&arr+1); // 120
    return 0;
}