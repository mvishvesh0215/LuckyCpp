// string comparison using string pointer

#include<stdio.h>

int main()
{

    char *str1 = "Sunbeam";
    char *str2 = "Sunbeam";

    if(str1 == str2) // 500 == 500
        printf("Strings are Equal !\n");
    else
        printf("Strings are not Equal !\n");
    return 0;
}