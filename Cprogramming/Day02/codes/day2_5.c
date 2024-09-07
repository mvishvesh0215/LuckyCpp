// char out of range :
// signed char range : -128  to  127
// unsigned char range :  0 to 255
#include<stdio.h>

int main()
{
   char ch1 = 'A'; // 65
   char ch2 = 'B'; // 66

   char result = ch1 + ch2;
   //  A  + B (65 + 66)
   // result = 131
   // char : -128  to 127
   
    printf("REsult = %d\n",result); // -125

    unsigned char res = ch1 + ch2;
    // unsigned char : 0 to 255
    // res = 131
  
    printf("Res = %d\n",res); // 131

    char num = 500; // -128   to  127

    printf("num = %d\n",num); // -12

    unsigned char u_ch = 500; // 0 to 255

    printf("u_ch = %d\n",u_ch); // 244
    return 0;
}