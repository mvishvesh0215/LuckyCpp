// char array using pointer notation


#include<stdio.h>

int main()
{
    char str[] = "sunbeam";

    printf("str = %s\n",str); // sunbeam
    printf("str[3] = %c\n",str[3]); // b
    printf("*(str+3) = %c\n",*(str+3)); // b

    printf("str+3 = %s\n",str+3); // beam
    printf("*str+3 = %c\n",*str+3); // v

    return 0;
}