//Predefined string functions : strcpy, strchr,strstr, strrev
// strlen, strcmp
#include<stdio.h>
#include<string.h>

int main()
{
    char src[] = "Sunbeam";
    char dest[50];

    strcpy(dest,src); // string copy
    printf("Destination = %s\n",dest);

    char ch = 'b';
    char *ptr = strchr(src,ch); // strchr("Sunbeam",'b')

    if(ptr == NULL)
        printf("Char not found !\n");
    else
        printf("Char found at index = %d\n",ptr - src);

    char str2[] = "beam";

    char *ptr2 = strstr(src,str2);
    if(ptr2 == NULL)
        printf("String not Found !\n");
    else
        printf("String found at index = %d\n",ptr2-src);


      printf("REversed String = %s\n",strrev(src));

    return 0;
}