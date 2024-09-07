// size of structure

#include<stdio.h>
#pragma pack(1)

struct student
{
    int roll_no;  //
    char name[20];  // 
    char grade;  //  
};


int main()
{
    printf("size = %d\n",sizeof(struct student)); // 25

    return 0;
}