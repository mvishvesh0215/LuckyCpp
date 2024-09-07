// sizeof and strlen

#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Sunbeam Info"; // string

    printf("size of str = %d\n",sizeof(str)); // 13
    printf("str len = %d\n",strlen(str)); // 12
    printf("str = %s\n",str); // Sunbeam Info

    char str2[] = "Sunbeam\0Info";
    printf("size of str2 = %d\n",sizeof(str2)); // 13
    printf("str len = %d\n",strlen(str2));// 7
    printf("str2 = %s\n",str2); // Sunbeam
    return 0;
}