// printing char arrays

#include<stdio.h>

int main()
{
    char str[4][30] = {"Red","Blue","Green","Yellow"};

    printf("str[2] = %s\n",str[2]); // green
    printf("str[2]+2 = %s\n",str[2]+2); // een
    printf("str[3][4] = %c\n",str[3][4]); // o
    printf("*(*(str+3)+4) = %c\n",*(*(str+3)+4)); // o
    return 0;
}