// dynamic memory allocation
// calloc 
// realloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *ptr =(int *) calloc(5, sizeof(int));

   for(int i =0;i<5;i++)
   {
        *(ptr+i) = i+10;
   }

   printf("Elements are :\n");

   for(int i =0;i<5;i++)
   {
    printf("%4d",ptr[i]);
   }

   ptr = realloc(ptr,sizeof(int)*7);

   ptr[5] = 15;
   ptr[6] = 16;

    printf("\n Elements after realloc  are :\n");

   for(int i =0;i<7;i++)
   {
    printf("%4d",ptr[i]);
   }

    free(ptr);
    ptr = NULL;

    return 0;
}