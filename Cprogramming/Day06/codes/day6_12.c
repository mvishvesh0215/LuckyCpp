// scan sets

#include<stdio.h>

int main()
{
    char name[40];

    printf("Enter the name :");
   // scanf("%[^A-Z]s",&name);// scan until capital letter
 //  scanf("%[a-z]s",&name); // scan only small letters
 //   scanf("%[^0-9]s",&name);
 //scanf("%[^\n]s",&name); // stop the scan at newline
   scanf("%[^.]s",&name);
   
    printf("name = %s\n",name);
    return 0;
}