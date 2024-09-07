// printing 2-D arrays with array and pointer notation

#include<stdio.h>

int main()
{

    int arr[3][2] = {11,22,33,44,55,66};

    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
         //  printf("%4d",arr[i][j]); // array notation
           printf("%4d",*(*(arr+i)+j)); // pointer notation
          
        }
        printf("\n");
    }

    return 0;
}