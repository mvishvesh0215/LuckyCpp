// union

#include<stdio.h>
union test
{
    int a;
    char b;
};

int main()
{
    union test t1;
    t1.a = 10; 

    printf("a = %d\n",t1.a); // 10

    t1.b = 'A';

    printf("a= %d\n",t1.a); // 65
    return 0;
}