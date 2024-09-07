// char 2-D arrays and size

#include<stdio.h>


int main()
{
    char str[] = "sunbeam"; // 1-D array

    char departments[][50] = {"Sales","MArketing","HR","TRaining"};
   
    printf("departments[3] = %s\n",departments[3]); // Training

    printf("departments[2][4] = %c\n",departments[1][4]); // e

    printf("in pointer notation : %c\n",*(*(departments+1)+4)); // e
   
    printf("size of array = %d\n",sizeof(departments)); // 200

    printf("size of row = %d\n",sizeof(departments[3])); // 50

    printf("size of column = %d\n",sizeof(departments[3][2])); // 1
    
    printf("%s",departments[1]+5); // ting

    /*
        departments + 1
        100 + 1*50
        150 + 5 * 1
        155 .. \0
    
    */
    return 0;
}