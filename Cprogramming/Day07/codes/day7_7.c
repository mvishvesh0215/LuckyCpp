// char pointer to 2-D array

#include<stdio.h>

int main()
{
    char *ptr = "Sunbeam"; // char pointer to 1-D array
   // ptr[2] = 'N'; // run time error

   char *ptr2[4] = {"One","Two","Three","Four"};

   printf("ptr2[3] = %s\n",ptr2[3]); // four

   printf("ptr[2][3] = %c\n",ptr2[2][3]); // e
   printf("in pointer notation = %c\n",*(*(ptr2+2)+3)); // e
  
 // ptr2[1][1] = 'o'; // runtime error

  printf("Good Bye !\n");
  
    return 0;
}