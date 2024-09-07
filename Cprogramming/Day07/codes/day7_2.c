//2-D array initialization and printing

#include<stdio.h>

int main()
{
    int arr1[3][2] = {11,22,33,44,55,66};
   // 3 rows and 2 columns
   /*
        11     22
        33     44
        55     66
   
   */

  int arr2[3][3] = {10,20,30,40,50,60,70};
  // partial initialization

  int arr3[3][3] = {{11,22},{33,44,55},{66}};
  // partial initialization

   // int arr[][]; // error
    // int arr[][2]; // error
  int arr4[][3] = {11,22,33,44,55};
  /*
        11    22    33
        44    55     0
  
  */


 for(int i =0;i<3;i++) // row
 {
    for(int j =0;j<2;j++) // col
    {
        printf("%4d",arr1[i][j]);
    }
    printf("\n");

 }
   
    return 0;   
}