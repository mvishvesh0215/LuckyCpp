// RO data section

#include<stdio.h>

int main()
{
    char str[] = "Sunbeam";

    char *ptr = "Sunbeam";// Sunbeam created on Read Only Memory
    // ptr created in FAR of main (in stack)

    printf("str = %s\n",str); // Sunbeam
    str[3] = 'B';
    printf("After changes : str = %s\n",str); // SunBeam
    
    printf("ptr = %s\n",ptr); // Sunbeam 

    ptr[3] = 'B'; // runtime error
    // trying to change data from read only memory
    printf("After changes : ptr = %s\n",ptr);
    return 0;
}