// pointer arithmetic
#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("&num = %u\n",&num); // 100
    printf("ptr = %u\n",ptr); // 100
/*
    ptr++; // increments as per the scale factor
    // scale factor : size of the data type of the pointer

     printf("&num = %u\n",&num); // 100
     printf("ptr = %u\n",ptr); // 104
     printf("num = %d\n",num); // 10
     printf("*ptr = %d\n",*ptr); // garbage
*/

    ++*ptr; // value is incremented
    // ++*ptr
    // ++value at ptr
    // ++value at 100
    // ++10
    // 11

     printf("\n Value incremented :\n");
    printf("&num = %u\n",&num); // 100
     printf("ptr = %u\n",ptr); // 100
     printf("num = %d\n",num); // 11
     printf("*ptr = %d\n",*ptr); // 11

    *ptr++; // pointer is incremented
    /*
    *  ptr++
    ptr = ptr + 1* scale factor
    ptr = 100 + 1* 4
    ptr = 104
    */
    
    printf("\n Pointer incremented :\n");
    printf("&num = %u\n",&num); // 100
     printf("ptr = %u\n",ptr); // 104
     printf("num = %d\n",num); // 11
     printf("*ptr = %d\n",*ptr); // garbage



    return 0;
}
/*
scale factor : size of the datatype of the pointer
ptr++ : ptr = ptr+1;
        ptr = ptr + 1* scale factor(4 bytes)
        ptr = 100 + 1*4
        ptr = 104
______________________________________________________
ptr++ : increments the pointer. pointer points to new address as per scale factor.
++ptr : increments the pointer. pointer points to new address as per scale factor.
*ptr++ : increments the pointer. pointer points to new address as per scale factor.
(*ptr)++ : increments the value of the variable to which pointer is pointing.
++*ptr : increments the value of the variable to which pointer is pointing.

*/