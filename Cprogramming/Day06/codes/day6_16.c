// string comparison
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Sunbeam";
    char str2[] = "sunbeam";
/*
    if(str1 == str2) // compares the addresses
    {
        printf("Strings are Equal !\n");
    }
    else
        printf("Strings are Not Equal !\n");
*/

    int result = strcmp(str1,str2); // 0 1 -1
    // strcmp returns either 0 (if same)
    // or 1 if string 1 is greater
    // or -1 if string2 is greater 

    if(result == 0)
        printf("Strings are Equal !\n");
    else if(result > 0)
        printf("String 1 is GReater !\n");
    else
        printf("String 2 is Greater !\n");


    return 0;
}