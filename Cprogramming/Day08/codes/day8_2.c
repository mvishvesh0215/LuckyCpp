// file handling : read mode

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("E:/Mar-24/OC16/Cprogramming/Day07/codes/day7_4.c","r");

    char ch;

    while((ch = fgetc(fptr)) != EOF) // End of File
    {
        printf("%c",ch);
    }

    fclose(fptr);
    return 0;
}