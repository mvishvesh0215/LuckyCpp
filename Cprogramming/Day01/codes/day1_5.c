// Escape Sequences :\n \t \r \b \" \' \\n %%

#include<stdio.h>

int main()
{
    printf("Hello\nEveryone !\n");

    printf("\tHow are You all ?\n");

    printf("Welcome OC-15\b6\n");
    // Welcome OC-16

    printf("good Evening !\rGreat\n");
    // carriage return. it takes the cursor to the beginning of the current line

   // "Good Day !"

    printf("\"Good Day !\"  \n");

    printf(" \' good Day !\' \n");

    // \n is the used as the new line escape sequence

    printf("\\n is used as the new line escape sequence !\n");

    printf("I scored 80%% ");
    return 0;
}