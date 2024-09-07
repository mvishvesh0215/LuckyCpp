// scanf and gets

#include<stdio.h>

int main()
{
    char name[30];

    printf("Enter the name :");
  //  scanf("%s",&name); 
  gets(name);

    printf("name = %s\n",name);
    return 0;   
}