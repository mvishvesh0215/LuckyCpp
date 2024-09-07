// size of pointer

#include<stdio.h>

int main()
{
    int num = 10; // 4
    char ch = 'A'; // 1
    float fvar = 1.2f; // 4
    double dvar = 1.2; // 8

    int *ptr = &num;
    char *c_ptr = &ch;
    float *f_ptr = &fvar;
    double *d_ptr = &dvar;

    printf("size of ptr = %d\n",sizeof(ptr));// 4
    printf("size of c_ptr = %d\n",sizeof(c_ptr)); //4
    printf("size of f_ptr = %d\n",sizeof(f_ptr)); // 4
    printf("size of d_ptr = %d\n",sizeof(d_ptr)); //4
    return 0;
}

/*
size of a pointer on a 32 bit compiler is 4 bytes
and on a 64 bit compiler is 8 bytes


*/