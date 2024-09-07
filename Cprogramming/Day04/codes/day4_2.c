// Typedef : used to give another name to the datatype

#include<stdio.h>

int main()
{
    unsigned int num1;
    typedef unsigned int un_int;
    // un_int is another name given to unsigned int data type

    un_int num2;
    // unsigned int num2

    enum colours{red,blue,green,white};

    enum colours c1; // c1 is the variable of type enum colours
    typedef enum colours clr; 
   // clr is another name for enum colours

   clr c2;
   // c2 is the variable of data type enum colours
   
   typedef enum departments{HR,sales,Training}dept;

   // dept is another name given to enum departments
   
   dept d1;
   // d1 is the variable of dept data type
   d1 = sales;
   printf("d1 = %d",d1); // 1
    return 0;
}