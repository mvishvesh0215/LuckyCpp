// sizeof operator

#include<stdio.h>

int main()
{
    int num = 50;

    float fvar = 1.4f;

    char ch = 'B';

    printf("size of num = %d \n",sizeof(num)); // 4
    //  size of num = 4

    printf("size of int = %d \n",sizeof(int)); // 4
    // size of int = 4

    printf("size of char = %d \n",sizeof(char)); // 1

    printf("size of fvar = %d \n",sizeof(fvar)); // 4
    
    printf("size of 1.4 = %d \n",sizeof(1.4)); /// 8
    
    printf("size of 1.4f = %d \n",sizeof(1.4f)); // 4
   
    printf("size of ch = %d \n",sizeof(ch)); // 1

    printf("size of B = %d \n",sizeof('B')); // 4

    printf("size of num + ch = %d \n",sizeof(num+ch)); // 4
   
    return 0;
}

/*

int num = 50;
char ch = 'B'; // 66

num + ch
int + char
50 + 66  = int

int + int = int

*/