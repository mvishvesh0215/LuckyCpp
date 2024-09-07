// width specifiers

#include<stdio.h>

int main()
{
    int num = 10;
    printf("%d\n",num);  // 10
    printf("%7d\n",num); // _____10 (5 spaces)
    printf("%-5d\n",num); // 10___  (3 spaces)
   
   float fnum = 1.45f;

   printf("%8.2f",fnum); // ____1.45
    
    printf("%-8.2f",fnum); // 1.45____
    return 0;
}