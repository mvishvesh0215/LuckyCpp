// Arrays : Declaration,initalization,printing
// size of arrays

#include<stdio.h>

int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("arr[0] = %d\n",arr[0]); // 10
    printf("arr[3] = %d\n",arr[3]); // garbage value
    
    int arr1[5] = {11,22,33,44,55}; // array initialization

    int arr2[5] = {1,2,3}; // partial initialization
    // in partial initialization remaining elements
    // are initialized to 0
   
   printf("arr2[1] = %d\n",arr2[1]); // 2
   printf("arr2[3] = %d\n",arr2[3]); // 0

   // int arr3[]; // error

   int arr3[] = {10,20,30};


    int arr4[7] = {11,22,33,44,55,66,77};

    for(int i = 0;i<7; i++)
    {
        printf("%4d",arr4[i]);  // __11__22
        // arr[0] 
        // arr[1]
        //arr[2]
        // arr[3]
    }

    printf("\n size of arr4 = %d\n",sizeof(arr4));
    printf("size of 1 array element = %d\n",sizeof(arr4[2]));
    return 0;
}