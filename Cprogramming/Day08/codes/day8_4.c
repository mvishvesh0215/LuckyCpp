// file handling : fseek () ftell () functions

#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *fptr = fopen("day8_2.c","r");

    char ch;
    printf("File pointer position = %d\n",ftell(fptr)); // 0

    fseek(fptr,5,SEEK_SET); // beginning of the file

    ch = fgetc(fptr);

    printf("ch = %c  file pointer position = %d\n",ch,ftell(fptr));
    
    fseek(fptr,7,SEEK_CUR); // current file pointer position

    ch = fgetc(fptr);

    printf("ch = %c  file pointer position = %d\n",ch,ftell(fptr));
    
    fseek(fptr,-3,SEEK_CUR);
    ch = fgetc(fptr);

    printf("ch = %c  file pointer position = %d\n",ch,ftell(fptr));
    
    fseek(fptr,-7,SEEK_END);
    ch = fgetc(fptr);

    printf("ch = %c  file pointer position = %d\n",ch,ftell(fptr));
    
    return 0;
}