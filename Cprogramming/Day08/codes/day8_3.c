// file handling : append mode

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("Sunbeam.txt","a");

    char ch;

    printf("Enter the data !");
    while((ch = getchar()) != EOF)
    {
        fputc(ch,fptr);
    }

    fclose(fptr);
    return 0;
}