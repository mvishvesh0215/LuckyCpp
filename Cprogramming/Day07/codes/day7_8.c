// command line arguments


#include<stdio.h>


int main(int argc,char *argv[], char *env[])
{
    for(int i =0; i<argc;i++) // argc = 6
    {
        printf("%s\n",argv[i]);
    }

    printf("\n evn variables :\n");

    for(int i =0;i<20;i++)
    {
        printf("%s\n",env[i]);
    }

    return 0;
}
/*
argc = argument count
argv : argument vector

*/